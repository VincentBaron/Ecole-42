int ft_strlcpy(char *dst, const char *src, int size)
{
    int i;

    i = 0;
    while (i < (size - 1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (i);
}