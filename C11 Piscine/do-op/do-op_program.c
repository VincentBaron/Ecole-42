#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_atoi(const char *nptr);
size_t  ft_strlen(const char *s);

int plus(int x, int y)
{
    return (x + y);
}

int minus(int x, int y)
{
    return (x - y);
}

int times(int x, int y)
{
    return (x - y);
}

int divi(int x, int y)
{
    return (x / y);
}

int mod(int x, int y)
{
    return (x % y);
}

void ft_putnbr(int x)
{
    char num;
    
    printf("x: %d\n", x);
    if (x >= 10)
        ft_putnbr(x / 10);
    num = x % 10 + 48;
    write(1, &num, 1);
}

int main(int argc, char **argv)
{
    char *errormssg1;
    int x;
    
    int (*doop[5])(int x, int y) = {plus, minus, times, divi, mod};
    
    errormssg1 = "Error: Wrong amount of arguments";
    if (argc != 4)
    {
        write(1, errormssg1, ft_strlen(errormssg1));
        return (0);
    }
    else
    {
        if (argv[2] == "+")
        {
            x = (doop[0])(ft_atoi(argv[1]), ft_atoi(argv[3]));
            ft_putnbr(x);
        }
        if (argv[2] == "-")
            ft_putnbr((doop[1])(ft_atoi(argv[1]), ft_atoi(argv[3])));
        if (argv[2] == "*")
            ft_putnbr((doop[2])(ft_atoi(argv[1]), ft_atoi(argv[3])));
        if (argv[2] == "/")
            ft_putnbr((doop[3])(ft_atoi(argv[1]), ft_atoi(argv[3])));
        if (argv[2] == "%")
            ft_putnbr((doop[4])(ft_atoi(argv[1]), ft_atoi(argv[3])));
    }
    return (0);
}