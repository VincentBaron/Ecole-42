#include <stdio.h>

void ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;
    
    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}

void fd(int x)
{
    printf("number: %d\n", x);
}

int main()
{
    int tabx[30] = {3, 5, 2, 7};

    ft_foreach(tabx, 4, &fd);
    return 0;
    
}