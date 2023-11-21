/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime_pierrot <maxime_pierrot@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:04:39 by maxime_pier       #+#    #+#             */
/*   Updated: 2023/11/21 19:02:27 by maxime_pier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	mallocsize;

	if (count <= 0 || size <= 0)
		return (malloc(0));
	if (count < 0 || size < 0)
		return (NULL);
	if (65535 / count < size)
		return (NULL);
	mallocsize = count * size;
	tmp = malloc(mallocsize);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, mallocsize);
	return (tmp);
}
