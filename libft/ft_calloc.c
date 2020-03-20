#include "libft.h"

void *calloc(int nmemb, int size)
{
    int i;
    
    if(!(array = malloc(nmemb * size)))
        return (0);
    array = ft_bzero(array, size * nmemb)
    return (array);
}