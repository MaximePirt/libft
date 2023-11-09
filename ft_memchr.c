/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime_pierrot <maxime_pierrot@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:49:52 by maxime_pier       #+#    #+#             */
/*   Updated: 2023/11/09 00:11:06 by maxime_pier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *spoint;
	size_t i;

	i = 0;
	spoint = s;
	while (((char)c != *spoint) && *spoint && i < n)
	{
		spoint++;
		i++;
	}
	if ((char)c == *spoint)
		return ((char *)spoint);
	else
		return (NULL);
}