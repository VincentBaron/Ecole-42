void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char x;
    unsigned char y;
    int i;
    
    x = src;
    y = dest;
    i = 0;
    while (i < n)
    {
        y = x;
        y++;
        x++;
        i++;
    }
    return (dest);
}