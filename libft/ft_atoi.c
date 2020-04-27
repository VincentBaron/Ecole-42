/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:10:31 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:10:37 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
    int i;
    int nbr;
    int sign;
    
    i = 0;
    nbr = 0;
    sign = 1;
    while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == ' ')
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (nptr[i] >= 48 && nptr[i] <= 57)
    {
        nbr = nbr * 10 + (nptr[i] - 48);
        i++;
    }
    return (nbr * sign);
}