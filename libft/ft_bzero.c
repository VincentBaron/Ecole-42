void    ft_bzero(void *s, size_t n)
{
    int i;
    char *x;
    
    x = s;
    i = 0;
    while (i < n)
    {
        *x = '\0';
        x++;
        i++;
    }
}