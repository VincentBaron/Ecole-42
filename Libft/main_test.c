# include "libft.h"
# include <string.h>

// ft_strncmp

int main(int argc, char **argv)
{
    printf("ft_strlcpy: %d\n", (int)ft_strlcpy(argv[1], argv[2], atoi(argv[argc - 1])));
    //printf("strlcpy: %d\n", strlcpy(argv[1], argv[2], atoi(argv[argc - 1])));
    return 0;
}

// ft_strncmp

/*int main(int argc, char **argv)
{
    printf("ft_strncmp: %d\n", (int)ft_strncmp(argv[1], argv[2], atoi(argv[argc - 1])));
    printf("strncmp: %d\n", (int)strncmp(argv[1], argv[2], atoi(argv[argc - 1])));
    return 0;
}*/

// ft_strchr

/*int main(int argc, char **argv)
{
    printf("ft_strrchr: %s\n", ft_strrchr(argv[1], atoi(argv[argc - 1])));
    printf("strrchr: %s\n", strrchr(argv[1], atoi(argv[argc - 1])));
    return 0;
}*/

// ft_strchr

/*int main(int argc, char **argv)
{
    printf("ft_strchr: %s\n", ft_strchr(argv[1], atoi(argv[argc - 1])));
    printf("strchr: %s\n", strchr(argv[1], atoi(argv[argc - 1])));
    return 0;
}*/

// ft_memcmp

/*int main(int argc, char **argv)
{
    printf("ft_memcmp: %d\n", (int)ft_memcmp(argv[1], argv[2], atoi(argv[argc - 1])));
    printf("memcmp: %d\n", (int)memcmp(argv[1], argv[2], atoi(argv[argc - 1])));
    return 0;
    
    char *src;
    char *dest1;
    char *dest2;
    
    src = NULL;
    dest1 = NULL;
    dest2 = NULL;
    
    printf("ft_memcpy: %s\n", (char *)ft_memcpy(dest1, src, atoi(argv[argc - 1])));
    printf("memcpy: %s\n", (char *)memcpy(dest2, src, atoi(argv[argc - 1])));
    return 0;
    
}*/

// ft_memchr

/*int main(int argc, char **argv)
{
    printf("ft_memchr: %s\n", (char *)ft_memchr(argv[1], atoi(argv[argc - 2]), atoi(argv[argc - 1])));
    printf("memchr: %s\n", (char *)memchr(argv[1], atoi(argv[argc - 2]), atoi(argv[argc - 1])));
    return 0;
    
    char *src;
    char *dest1;
    char *dest2;
    
    src = NULL;
    dest1 = NULL;
    dest2 = NULL;
    
    printf("ft_memmove: %s\n", (char *)ft_memmove(dest1, src, atoi(argv[argc - 1])));
    printf("memmove: %s\n", (char *)memmove(dest2, src, atoi(argv[argc - 1])));
    return 0;
    
}*/

// ft_memcpy

/*int main(int argc, char **argv)
{
    printf("ft_memmove: %s\n", (char *)ft_memmove(argv[1], argv[2], atoi(argv[argc - 1])));
    printf("memmove: %s\n", (char *)memmove(argv[1], argv[2], atoi(argv[argc - 1])));
    return 0;
    
    char *src;
    char *dest1;
    char *dest2;
    
    src = NULL;
    dest1 = NULL;
    dest2 = NULL;
    
    printf("ft_memmove: %s\n", (char *)ft_memmove(dest1, src, atoi(argv[argc - 1])));
    printf("memmove: %s\n", (char *)memmove(dest2, src, atoi(argv[argc - 1])));
    return 0;
    
}*/

// ft_memccpy

/*int main(int argc, char **argv)
{
    printf("ft_memccpy: %s\n", (char *)ft_memccpy(argv[1], argv[2], atoi(argv[argc - 2]), atoi(argv[argc - 1])));
    printf("memccpy: %s\n", (char *)memccpy(argv[1], argv[2], atoi(argv[argc - 2]), atoi(argv[argc - 1])));
    return 0;
}*/

// ft_memcpy

/*int main(int argc, char **argv)
{
    printf("ft_memcpy: %s\n", (char *)ft_memcpy(argv[1], argv[2], atoi(argv[argc - 1])));
    printf("memcpy: %s\n", (char *)memcpy(argv[1], argv[2], atoi(argv[argc - 1])));
    return 0;
    
    char *src;
    char *dest1;
    char *dest2;
    
    src = NULL;
    dest1 = NULL;
    dest2 = NULL;
    
    printf("ft_memcpy: %s\n", (char *)ft_memcpy(dest1, src, atoi(argv[argc - 1])));
    printf("memcpy: %s\n", (char *)memcpy(dest2, src, atoi(argv[argc - 1])));
    return 0;
    
}*/
