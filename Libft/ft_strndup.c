#include "libft.h"

char *ft_strndup(char *temp, int n)
{
    char *line;
    int i;
    if(!(line = (char *)malloc(sizeof(char) * (n + 1))))
        return (NULL);
    i = 0;
    while (i < n)
    {
        line[i] = temp[i];
        i++;
    }
    line[i] = '\0';
    return (line);
}