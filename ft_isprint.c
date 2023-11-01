/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:43:12 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/30 18:00:08 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return(1);
    return(0);
}

#include <stdio.h>
#include <ctype.h>
int main(int argc, char **argv)
{
    if (argc != 2)
    return(0);
printf("%d\n", ft_isprint(argv[1][0]));
printf("%d", isprint(argv[1][0]));

}