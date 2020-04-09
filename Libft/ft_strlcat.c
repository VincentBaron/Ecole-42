#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int f;
    
    f = ft_strlen(dst);
    printf ("total size: %d\n", (int)(ft_strlen(src) + ft_strlen(dst)));
    if (size > ft_strlen(dst) + ft_strlen(src))
    {
        while (*src)
        {
            dst[f] = *src;
            f++;
            src++;
        }
        dst[f] = '\0';
        printf ("dest1: %s\n", dst);
        return (ft_strlen(dst) + ft_strlen(src));
    }
    else
    {
        printf("dest2: %s\n", dst);
        return (size + ft_strlen(src));
    }
}



