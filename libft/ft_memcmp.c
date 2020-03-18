int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char x1;
    unsigned char x2;
    int i;
    
    x1 = s1;
    x2 = s2;
    if (n == 0)
        return (0);
    while (i < n)
    {
        if (*x1 != *x2)
            return (x1 - x2)
        i++;
    }
    return (*x1 - *x2);
}