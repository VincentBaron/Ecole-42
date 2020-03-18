#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
    int i;
    unsigned char *x;
    
    i = 0;
    x = s;
    while (i < n)
    {
        *x = c;
        x++;
        i++;
    }
    return (s);
}