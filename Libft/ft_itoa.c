#include "libft.h"

char *alloc_itoa(int n, int size)
{
    char *itoa;
    int sign;
    
    if (!(itoa = (char *)malloc(sizeof(char) * (size + 1))))
        return (0);
    sign = 0;
    if (n < 0)
    {
        sign = 1;
        n *= -1;
    }
    itoa[size + 1] = '\0';
    while (n > 0)
    {
        itoa[size] = n % 10 + 48;
        size --;
        n /= 10;
    }
    if (sign == 1)
        itoa[size] = '-';
    return (itoa);
}

char    *ft_itoa(int n)
{
    int nbx;
    int size;
    char *itoa;
    
    nbx = n;
    size = 0;
    if (nbx < 0)
    {
        nbx *= -1;
        size = 1;
    }
    while (nbx >= 10)
    {
        nbx /= 10;
        size++;
    }
    itoa = alloc_itoa(n, size);
    return (itoa);
}