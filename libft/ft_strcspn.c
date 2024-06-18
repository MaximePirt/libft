/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <mpierrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:52:09 by mpierrot          #+#    #+#             */
/*   Updated: 2024/06/18 14:52:39 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strcspn (const char *s1, const char *s2)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		while (s1[i])
		{
			if (s2[j] == s1[i])
				break;
			i++;
		}
		if (!s1[i])
			return(j);
		i = 0;
		j++;
	}
	return (j);
}