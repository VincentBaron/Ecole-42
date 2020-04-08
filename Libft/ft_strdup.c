#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dup;
    int size;
    int i;
    
    size = 0;
    while (s[size])
        size++;
    if(!(dup = malloc(sizeof(char) * (size + 1))))
        return (0);
    i = 0;
    while (i < size)
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}