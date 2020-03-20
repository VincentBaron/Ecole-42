#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;
    
    i = 0;
    while (i < length)
    {
        (*f)(tab[i]);
        i++;
    }
}

int fd(int x)
{
    x *= 2;
    return (x);
}

int main()
{
    int i;
    int tabx[30] = {3, 5, 2, 7};
    int tab[20];
    
    void (*f)(int);
    
    f = &fd;
    i = 0;
    tab = ft_foreach(tabx, 4, f);
    while (i < 4)
    {
        printf("tab[%d]: %d\n", i, tab[i]);
        i++;
    }
    
    
}