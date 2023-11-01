/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:43:12 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/30 18:00:08 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t len)
{
    unsigned char   *era;

    era = s;

    while (len--)
    {
        *era++ = (unsigned char) c;
    }
    return  (s);
}

int main() {
    char str[50];

    // Initialisation de str avec la lettre 'x' pour une longueur de 50 caractères
    printf("Avant ft_memset : %s\n", str);
    ft_memset(str, 'x', 49);
    printf("Après ft_memset : %s\n", str);

    return 0;
}