/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime_pierrot <maxime_pierrot@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:11:55 by maxime_pier       #+#    #+#             */
/*   Updated: 2023/11/19 14:24:10 by maxime_pier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;

	if (!s || !fd)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
