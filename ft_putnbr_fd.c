/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime_pierrot <maxime_pierrot@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:25:09 by maxime_pier       #+#    #+#             */
/*   Updated: 2023/11/21 18:32:49 by maxime_pier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	size_t	nb;
	char	c;

	nb = n;
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		c = nb % 10 + '0';
		ft_putchar_fd(c, fd);
	}
}
