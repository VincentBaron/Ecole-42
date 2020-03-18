char *ft_strnstr(const char	*big, const char *little, size_t len)
{
    int i;
    int f;
    int k;
    
    i = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (big[i])
    {
        k = 0;
        if (big[i] == little[k])
        {
            f = i;
            while (big[f] == little[k])
            {    
                k++;
                f++;
            }
            if (little[k] == '\0' || k >= len)
                return ((char *)&big[i]);
        }
        i++;
    }
    return (0);
}