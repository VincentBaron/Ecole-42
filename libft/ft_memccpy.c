#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
     unsigned char *x;
     unsigned char *y;
     unsigned int i;
     
     x = (unsigned char *)src;
     y = dest;
     i = 0;
     while (*x != c && i < n)
     {
         *y = *x;
         y++;
         x++;
         i++;
         
     }
     if (*x != c)
        return (0);
    else
        return (y + 1);
}