/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:16:29 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/30 15:34:09 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdio.h>

    int ft_isalpha(int c);
    int ft_isdigit (int c);
    int ft_isalnum (int c);
    int ft_isascii (int c);
    int ft_isprint(int c);
    void ft_bzero (void *s, size_t n);
    void *ft_memset (void *s, int c, size_t len);
    void *ft_memcpy (void *dest, const void *src, size_t len);
    
#endif
