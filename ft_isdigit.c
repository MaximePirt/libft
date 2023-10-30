/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:43:12 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/30 18:00:08 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit (int c)
{
	if (c >= 48 && c <= 57)
			return(1);
	else
			return(0);
}

#include <stdio.h>
#include <ctype.h>
int main(int argc, char **argv)
{
	if(argc != 2)
			return(0);
	printf("%d\n", ft_isdigit(argv[1][0]));
	printf("%d", isdigit(argv[1][0]));
}
