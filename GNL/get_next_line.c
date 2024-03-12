/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <mpierrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:42:52 by mpierrot          #+#    #+#             */
/*   Updated: 2024/03/12 13:01:46 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_cleantamp(char *tamp, int i)
{
	size_t	j;
	size_t	a;

	a = ft_strlen(tamp);
	j = 0;
	while (tamp[j] && j < (a - i))
	{
		tamp[j] = tamp[j + i];
		j++;
	}
	while (tamp[j])
	{
		tamp[j] = '\0';
		j++;
	}
	return (tamp);
}

void	firstfill(char *tamp, char *res)
{
	size_t	i;

	i = 0;
	while (tamp[i] != '\n' && tamp[i])
	{
		res[i] = tamp[i];
		i++;
	}
	if (tamp[i] == '\n')
	{
		res[i] = tamp[i];
		i++;
	}
	tamp = ft_cleantamp(tamp, i);
	return ;
}

char	*ft_readline(int fd, char *res, char *tamp)
{
	int		i;
	char	*buff;

	i = 0;
	while (!ft_check(res, '\0') && !ft_check(res, '\n'))
	{
		buff = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
		if (!buff)
			return (NULL);
		i = read(fd, buff, BUFFER_SIZE);
		if (i <= 0)
		{
			free(buff);
			buff = NULL;
			break ;
		}
		res = ft_strjoin(res, buff);
		if (((ft_check(res, '\n') || ft_check(res, '\0'))) && buff)
			lastfill(buff, tamp);
		free(buff);
		buff = NULL;
	}
	return (res);
}

int	ft_result_sort(char **res, char **tamp)
{
	int	i;

	i = 0;
	if (!ft_strlen(*res))
		i = -1;
	else if (ft_check(*res, '\0') || !ft_strlen(*tamp))
	{
		if (*tamp)
			i = 1;
	}
	if (i == -1 || i == 1)
	{
		free(*tamp);
		*tamp = NULL;
		if (i == 1)
			return (0);
		free(*res);
		*res = NULL;
		return (1);
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char		*res;
	static char	*tamp[1024];
	int			i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	if (!tamp[fd])
		tamp[fd] = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!tamp[fd])
		return (NULL);
	res = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!res)
		return (NULL);
	firstfill(tamp[fd], res);
	res = ft_readline(fd, res, tamp[fd]);
	i = ft_result_sort(&res, &tamp[fd]);
	if (i == 1)
		return (NULL);
	return (res);
}
