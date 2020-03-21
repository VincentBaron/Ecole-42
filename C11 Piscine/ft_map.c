#include <stdio.h>
#include <stdlib.h>

int *ft_map(int *tab, int length, int (*f)(int))
{
    int i;
    int *tabretour;
    
    if(!(tabretour = (int *)malloc(sizeof(int) * (length))))
        return (0);
    i = 0;
    while (i < length)
    {
        tabretour[i] = (*f)(tab[i]);
        i++;
    }
    return (tabretour);
}

int fd(int x)
{
    x *= 2;
    return (x);
}

int main()
{
    int i;
    int *tabretour;
    int tabx[4] = {1, 2, 3, 4};
    
    tabretour = ft_map(tabx, 4, &fd);
    
    i = 0;
    while (i < 4)
    {
        printf("tab[%d]: %d\n", i, tabretour[i]);
        i++;
    }
    return 0;
    
}