/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:13:11 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/30 20:04:01 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
    t_list *dup;
    t_list *tmp;
    
    if (!lst || !f)
        return (NULL);
    if (!(dup = (t_list *)malloc(sizeof(t_list) * (ft_lstsize(lst)))))
        return (NULL);
    dup = f(lst);
    tmp = dup;
    while (lst != NULL)
    {
        tmp->next = f(lst);
        tmp = tmp->next;
        lst = lst->next;
    }
    return (dup);
}