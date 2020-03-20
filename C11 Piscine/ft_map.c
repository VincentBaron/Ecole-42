#include <stdio.h>

int *ft_map(int *tab, int length, int (*f)(int))
{
    int i;
    
    i = 0;
    while (i < length)
    {
        tab[i] = (*f)(tab[i]);
        i++;
    }
    return (tab);
}

int fd(int x)
{
    x *= 2;
    return (x);
}

int main()
{
    int i;

    int tabx[4] = {1, 2, 3, 4};
    
    tabx = ft_map(tabx, 4, &fd);
    
    i = 0;
    while (i < 4)
    {
        printf("tab[%d]: %d\n", i, tabx[i]);
        i++;
    }
    return 0;
    
}