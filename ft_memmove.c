/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime_pierrot <maxime_pierrot@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:43:12 by mpierrot          #+#    #+#             */
/*   Updated: 2023/11/08 14:04:26 by maxime_pier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t c;

	c = 0;

	if (!dst && !src)
		return (0);

	if (src < dst)
	{
		c = len;
		while (c > 0)
		{
			c--;
			((unsigned char *)dst)[c] = ((unsigned char *)src)[c];
		}
	}
	else
	{
		while (c < len)
		{
			((unsigned char *)dst)[c] = ((unsigned char *)src)[c];
			c++;
		}
	}
	return (dst);
}