/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:11:17 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:11:19 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c);
int ft_isalpha(int c);

int ft_isalnum(int c)
{
    if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
        return (1);
    else
        return (0);
}