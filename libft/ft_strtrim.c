#include "libft.h"

int check_charset(char c, char const *set)
{
    while (*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *trim;
    int size;
    int i;
    int f;
    
    size = 0;
    i = 0;
    f = 0;
    while (s1[f])
    {
        if (check_charset(*s1, set) == 0)
            size++;
        f++;
    }
    if (!(trim = malloc(sizeof(char) * (size + 1))))
        return (0);
    f = 0;
    while (i < size && s1[f])
    {
        if (check_charset(s1[f], set) == 0)
        {
            trim[i] = s1[f];
            i++;
        }
        f++;
    } 
    trim[i] = '\0';
    return (trim);
}