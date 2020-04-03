#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *x1;
    unsigned char *x2;
    unsigned int i;
    
    x1 = (unsigned char *)s1;
    x2 = (unsigned char *)s2;
    if (n == 0)
        return (0);
    i = 0;
    while (i < n)
    {
        if (*x1 != *x2)
            return (*x1 - *x2);
        i++;
    }
    return (*x1 - *x2);
}