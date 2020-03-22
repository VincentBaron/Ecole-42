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
    return (x * y);
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
    
    if (x < 0)
    {    
        x *= -1;
        write(1, "-", 1);
    }
    if (x >= 10)
        ft_putnbr(x / 10);
    num = x % 10 + 48;
    write(1, &num, 1);
}

int main(int argc, char **argv)
{
    char *errormssg1;
    char *errormssg2;
    
    int (*doop[5])(int x, int y) = {plus, minus, times, divi, mod};
    
    errormssg1 = "Stop : division by zero";
    errormssg2 = "Stop : modulo by zero";
    if (argc != 4)
    {
        return (0);
    }
    if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
    {
        write(1, "0", 1);
        return (0);
    }
    else
    {
        if (*argv[2] == '+')
            ft_putnbr((doop[0])(ft_atoi(argv[1]), ft_atoi(argv[3])));
        if (*argv[2] == '-')
            ft_putnbr((doop[1])(ft_atoi(argv[1]), ft_atoi(argv[3])));
        if (*argv[2] == '*')
            ft_putnbr((doop[2])(ft_atoi(argv[1]), ft_atoi(argv[3])));
        if (*argv[2] == '/')
        {
            if (ft_atoi(argv[3]) == 0)
                write(1, errormssg1, ft_strlen(errormssg1));
            else
                ft_putnbr((doop[3])(ft_atoi(argv[1]), ft_atoi(argv[3])));
        }
        if (*argv[2] == '%')
         {
            if (ft_atoi(argv[3]) == 0)
                write(1, errormssg2, ft_strlen(errormssg2));
            else
                ft_putnbr((doop[4])(ft_atoi(argv[1]), ft_atoi(argv[3])));
        }
    }
    return (0);
}