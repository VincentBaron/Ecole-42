char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i--;
    }
    return ((void *)0);
}