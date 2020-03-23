#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;
    
    if ((*lst) != 0 && del)
    {
        temp = *lst;
        while ((*lst)->next != 0)
        {
            (*del)(*lst->content);
            free(*lst);
            *lst = temp->next;
        }
    }
    else
        return;
}