#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst && f)
    {
        while (lst != 0)
        {
            (*f)(lst);
            lst = lst->next;
        }
    }
    else
        return;
}