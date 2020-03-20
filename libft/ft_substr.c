#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    int i;
    
    if(!(sub = malloc(sizeof(char) * (len + 1))))
        return (0);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start - 1];
        i++;
        start++;
    }
    sub[i] = '\0';
    return (sub);
}