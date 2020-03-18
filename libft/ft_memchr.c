void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    unsigned char x;
    
    x = s;
    i = 0;
    while (*x != c && i < n)
    {
        x++;
        i++;
    }
    if (*x != c)
        return (0);
    else
        return (x);
}