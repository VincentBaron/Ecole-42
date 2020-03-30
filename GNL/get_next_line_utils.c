#include "get_next_line.h"

size_t  ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}

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
    free(temp);
    return (line);
}

char *ft_strjoin(char *buffer, char *temp)
{
    char *tempnew;
    char *ptempnew;
    
    if (temp == NULL)
        return buffer;
    if (!(tempnew = (char *)malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(temp) + 1))))
        return (NULL);
    ptempnew = tempnew;
    while (*temp)
    {
        *tempnew = *temp;
        tempnew++;
        temp++;
    }
    while (*buffer)
    {
        *tempnew = *buffer;
        tempnew++;
        buffer++;
    }
    *tempnew = '\0';
    return (ptempnew);
}