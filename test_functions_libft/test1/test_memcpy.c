#include "libft_test.h"

int test_memset(void *s, int c, size_t n)
{
    char *w;
    char *y;
    
    w = s;
    y = s;
    ft_memset(w, c, n);
    memset(y, c, n);
    if (w == y)
        return (1);
    else
        return(0);
}