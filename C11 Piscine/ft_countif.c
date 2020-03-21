int ft_isnum(char *s)
{
    while (*s != 0)
    {
        if (*s >= 48 && *s <= 57)
            return (1);
        s++;
    }
    return (0);
}

#include <stdio.h>

int ft_count_if(char **tab, int length, int (*f)(char *))
{
    int count;
    int i;
    
    count = 0;
    i = 0;
    while (i < length)
    {
        if ((*f)(tab[i]) != 0)
            count++;
        i++;
    }
    return (count);
}

int main(int argc, char **argv)
{
    
    printf("ft_any: %d\n", ft_count_if(&argv[1], argc - 1, &ft_isnum));
    return (0);
}