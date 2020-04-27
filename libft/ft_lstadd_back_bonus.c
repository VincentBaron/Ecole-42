/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:12:15 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:12:23 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    if (*alst != NULL)
    {
	    while ((*alst)->next != NULL)
	        *alst = (*alst)->next;
	    (*alst)->next = new;
    }
    else
    	*alst = new;
}