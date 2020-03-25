#include "libft.h"

void *ft_calloc(int nmemb, int size)
{
    void *array;
    
    if(!(array = (void *)malloc(nmemb * size)))
        return (0);
    ft_bzero(array, (size * nmemb));
    return ((void *)array);
}