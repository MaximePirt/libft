/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:24:16 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/30 17:37:46 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return(1);
	else
			return(0);
}

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
if (argc != 2)
		return(0);
printf("%d", ft_isalpha(argv[1][0]));
}
