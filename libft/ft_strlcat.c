size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int k;
    
    i = 0;
    k = 0;
    while (dst[i])
    {
        i++;
        k++;
    }
    i = 0;
    while (src[i] && i < size)
    {
        dst[k] = src[i];
        k++;
        i++;
    }
    dst[k] = '\0';
    return (k);
}



