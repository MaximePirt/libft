/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:16:29 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/30 15:34:09 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
    /* la en gros c est memmove*/

	i = 0;
	while (i+1 < dstsize)
    {
        *dst++ = *src++;
        i++;
    }
    if (i < dstsize)
        *dst = 0;
    while (*src++)
        ++i;

return(i);
}

/*
#include <string.h>
int main ()
{
char dest[] = "jeanlebg";
char src[] = "jeanmichel";
size_t len = 0;

    printf("Avant toutes fonctions : %s\n", dest);
    ft_strlcpy(dest, src, len);
    printf("Apres ma fonction : %s\n", dest);
    strlcpy(dest, src, len);
    printf("Apres la vraie fonction : %s\n", dest);

} */