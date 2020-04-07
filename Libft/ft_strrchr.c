#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    i -= 1;
    while (s[i])
    {
        if (s[i] == c)
            break;
        i--;
    }
    if (s[i] != c)
        return (NULL);
    else
        return ((char *)&(s[i]));
}