#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int size;
    
    size = 0;
    while ((*lst).next != 0)
    {
        size++;
        lst = lst->next;
    }
    return (size + 1);
}