#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int x;
    char *trim;
    
    i = 0;
    while (check_charset(s1[i], set) == 1)
        i++;
    trim = ft_strdup(&s1[i]);
    x = ft_strlen(trim);
    x--;
    while (check_charset(trim[x], set) == 1)
        x--;
    trim = ft_strndup(trim, x + 1);
    return (trim);
}