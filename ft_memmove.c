/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:43:12 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/30 18:00:08 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove (void *dst, const void *src, size_t len)
{

    size_t c;

    c = 0;

    if (!dst && !src)
        return(0);

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
    return(dst);
    // si len > sizeof dest -> return
    
    /* Ensuite en gros :
    je prend x characters de src, et je vais les mettre dans len. that's it
    Si src vide : dest vide*/
}

#include <string.h>
int main ()
{
    char src[] = "abcdef";
    char dest[] = "1234567891011";
    size_t len = 1;

    printf("Avant toutes fonctions : %s\n", dest);
    ft_memmove(dest, src, len);
    printf("Apres ma fonction : %s\n", dest);
    memmove(dest, src, len);
    printf("Apres la vraie fonction : %s\n", dest);

    return(0);
}