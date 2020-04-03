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
        (*f)(head);
        head = head->next;
        lst = lst->next;
    }
    return (dup);
}