#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    while (src[j])
        j++;
    if (size == 0)
        return (j); 
    i = 0;
    while (i < (size - 1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (i);
}