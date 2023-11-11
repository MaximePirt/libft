/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime_pierrot <maxime_pierrot@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:04:39 by maxime_pier       #+#    #+#             */
/*   Updated: 2023/11/11 19:31:20 by maxime_pier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	mallocsize;

	mallocsize = count * size;
	tmp = malloc(mallocsize);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, count * size);
	return (tmp);
}
