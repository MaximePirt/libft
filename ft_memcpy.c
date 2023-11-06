/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:43:12 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/30 18:00:08 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *destpoint;
    const unsigned char *srcpoint;

    if (!src && !dst)
        return(0);

    destpoint = (unsigned char *) dst;
    srcpoint = (const unsigned char *) src;
    i = 0;

    while (i < n)
    {
        destpoint[i] = srcpoint[i];
        i++;
    }
    return (dst);
}

/*
#include <string.h>
int main()
{
    char src[] = "Ceci est une chaîne source.";
    char dst[50];
    size_t len = 5;

    printf("Avant ft_memcpy, dst : %s\n", dst);
    ft_memcpy(dst, src, len);
    printf("Apres ft_memcpy, dst : %s\n", dst);

    return 0;
}
*/