#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char temp[n];
    unsigned char *x;
    unsigned char *y;
    unsigned int i;
    
    if (dest == NULL || src == NULL)
        return (NULL);
    x = (unsigned char *)src;
    y = dest;
    i = 0;
    while (i < n)
    {
        temp[i] = *x;
        x++;
        i++;
    }
    i = 0;
    while (y[i])
    {
        y[i] = temp[i];
        i++;
    }
    return (dest);
}