/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:14:40 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:14:41 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char num;
    unsigned int nx;
    
    nx = n;
    if (nx <= 0)
    {
        ft_putchar_fd('-', fd);
        nx *= -1;
    }
    if (nx >= 10)
        ft_putnbr_fd(n / 10, fd);
    num = n % 10 + 48;
    ft_putchar_fd(num, fd);
}