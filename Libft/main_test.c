# include "libft.h"
# include <string.h>

// ft_itoa

char	*itoa_test(int nb);

int main(int argc, char **argv)
{
   (void)argc;
    printf("ft_itoa: %s\n", ft_itoa(atoi(argv[1])));
    printf("itoa_test: %s\n", itoa_test(atoi(argv[1])));
    return 0;
}

// ft_strnstr

/*char	*strtrim_test(const char *s1, char const *set);

int main(int argc, char **argv)
{
   (void)argc;
    printf("ft_strtrim: %s\n", ft_strtrim(strdup(argv[1]), strdup(argv[2])));
    printf("strtrim_test: %s\n", strtrim_test(strdup(argv[1]), strdup(argv[2])));
    return 0;
}*/

// ft_substr

/*char		*substr_test(char const *s, unsigned int start, size_t len);

int main(int argc, char **argv)
{
    printf("ft_substr: %s\n", ft_substr(strdup(argv[1]), atoi(argv[2]), atoi(argv[argc - 1])));
    printf("substr_test: %s\n", substr_test(strdup(argv[1]), atoi(argv[2]), atoi(argv[argc - 1])));
    return 0;
}*/

// ft_strdup

/*int main(int argc, char **argv)
{
    (void)argc;
    printf("ft_strdup: %s\n", ft_strdup(argv[1]));
    printf("strdup: %s\n", strdup(argv[1]));
    return 0;
}*/

// ft_atoi

/*int main(int argc, char **argv)
{
    (void)argc;
    printf("ft_atoi: %d\n", ft_atoi(argv[1]));
    printf("atoi: %d\n", atoi(argv[1]));
    return 0;
}*/

// ft_strnstr

/*char	*strnstr_test(const char *haystack, const char *needle, size_t len);

int main(int argc, char **argv)
{
    printf("ft_strnstr: %s\n", ft_strnstr(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    printf("strnstr_test: %s\n", strnstr_test(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    return 0;
}*/

// ft_strlcat

/*size_t	strlcat_test(char *dst, const char *src, size_t size);

int main(int argc, char **argv)
{
   printf("ft_strlcat: %d\n", (int)ft_strlcat(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    printf("strlcat_test: %d\n", (int)strlcat_test(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    return 0;
}*/

// ft_strlcpy

/*size_t	strlcpy_test(char *dst, const char *src, size_t size);

int main(int argc, char **argv)
{
    printf("ft_strlcpy: %d\n", (int)ft_strlcpy(argv[1], argv[2], atoi(argv[argc - 1])));
    printf("strlcpy_test: %d\n", (int)strlcpy_test(argv[1], argv[2], atoi(argv[argc - 1])));
    return 0;
}*/

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
