/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:16:29 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/30 15:34:09 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
    size_t total_len;
    size_t i;

	dstlen = 0;
	srclen = 0;
    i = 0;
	while (dst[dstlen])
		dstlen++;
    while (src[srclen])
        srclen++;

    total_len = dstlen + srclen;

    if(!dst && !dstsize)
        return(srclen);
    if (dstsize <= total_len)
        return(dstsize + srclen);
	
    while (src[i] && (dstlen + i + 1) < dstsize)
	{
		dst[dstlen + i] = src[i];
        i++;
	}
	dst[dstlen + i] = '\0';
	return (total_len);
}

#include <string.h>
int main ()
{
char dest[20] = "Hello";
    char src[] = ", World!";
    size_t size = 15;

    printf("Initial Destination: %s\n", dest);
    printf("Source: %s\n", src);

    size_t result = ft_strlcat(dest, src, size);

    printf("mes resultats %s\n", dest);
    printf("longueur total: %zu\n", result);
    size_t ah = strlcat(dest, src, size);
    printf("vraie fonction %s\n", dest);
    printf("longueur total %zu\n", ah);

    return 0;

}