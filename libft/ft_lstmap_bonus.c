/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:13:11 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:13:12 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
    t_list *dup;
    t_list *head;
    
    if (!(dup = (t_list *)malloc(sizeof(t_list) * (ft_lstsize(lst)))))
        return (0);
    head = dup;
    while (lst != 0)
    {
        *head = *lst;
        (*f)(head->content);
        head = head->next;
        lst = lst->next;
    }
    return (dup);
}