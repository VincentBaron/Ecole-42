#include "get_next_line.h"

size_t  ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        i++;
    }
    printf ("i: %d\n", i);
    return (i);
}

char *ft_strjoin(char *buffer, char *temp)
{
    char *tempnew;
    
    if (temp == NULL)
        return buffer;
    if (!(tempnew = (char *)malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(temp) + 1))))
        return (NULL);
    printf("Chaien 1  :%s\n",  buffer);
    printf("Chaine2 : %s\n", temp);
    while (*temp)
    {
        printf("temp[i] : %c\n", *temp);
        *tempnew = *temp;
        printf("tempnew[i] : %c\n", *tempnew);
        tempnew++;
        temp++;
    }
    printf("*tempnew: %c\n", *tempnew);
    while (*buffer)
    {
        *tempnew = *buffer;
        tempnew++;
        buffer++;
    }
    *tempnew = '\0';
    printf("tempnew: %s\n", tempnew);
    return (tempnew);
}

int main(int ac, char **av)
{
    printf("%s\n", ft_strjoin(av[1], av[2]));
    return (0);
}