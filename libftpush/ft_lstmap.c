/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:13:11 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/03 23:47:37 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	(void)del;
	if (!f || !del)
		return (NULL);
	new = head;
	while (lst->next)
	{
		new = lst_new(f(lst));
		lst = lst->next;
		new = new->next;
	}
	return (head);
}
