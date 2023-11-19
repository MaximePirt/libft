/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime_pierrot <maxime_pierrot@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:25:09 by maxime_pier       #+#    #+#             */
/*   Updated: 2023/11/19 14:42:32 by maxime_pier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);
char	*ft_itoa(int n);

void	ft_putnbr_fd(int n, int fd)
{
	char	*res;

	if (n == -2147483648)
		res = "-2147483648";
	else
		res = ft_itoa(n);
	ft_putstr_fd(res, fd);
}
