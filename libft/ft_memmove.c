void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char temp;
    unsigned char x;
    unsigned char y;
    int i;
    
    x = src;
    y = dest;
    i = 0;
    while (i < n)
    {
        *temp = *x;
        temp++;
        x++;
        i++;
    }
    y = temp;
    return (est);
}