/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <mpierrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:52:21 by mpierrot          #+#    #+#             */
/*   Updated: 2024/06/18 14:52:35 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok_r(char *s, const char *delim, char **save_ptr)
{
	char *end;

	if (!s)
		s = *save_ptr;
	if (*s == '\0')
	{
		*save_ptr = s;
		return (NULL);
	}
	s += ft_strspn(s, delim);
	if (*s == '\0')
	{
		*save_ptr = s;
		return (NULL);
	}
	end = s + ft_strcspn(s, delim);
	if (!end)
	{
		*save_ptr = end;
		return (s);
	}
	*end = '\0';
	*save_ptr = end + 1;
	return (s);
}