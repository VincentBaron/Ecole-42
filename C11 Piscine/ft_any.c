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

int ft_any(char **tab, int(*f)(char*))
{
    
    while (*tab)
    {
        if ((*f)(*tab) != 0)
            return (1);
        tab++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    (void)argc;
    
    printf("ft_any: %d\n", ft_any(&argv[1], &ft_isnum));
    return (0);
}