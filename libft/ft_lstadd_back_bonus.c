#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    while ((*alst)->next != 0)
        *alst = (*alst)->next;
    (*alst)->next = new;
}

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *lst;

	lst = *alst;
	if (*alst != NULL)
	{
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = new;
	}
	else
		*alst = new;
}