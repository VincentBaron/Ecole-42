#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
    (void)argc;
    printf("itoa: %s\n", ft_itoa(ft_atoi(argv[1])));
    return (0);
}

/*int main(int argc, char **argv)
{
    (void)argc;
    char **spliter;
    int i;
    
    spliter = ft_split(argv[1], *argv[2]);
    i = 0;
    while (spliter[i])
    {
        printf("split: %s\n", spliter[i]);
        i++;
    }
    return 0;
}*/

/*int main(int argc, char **argv)
{
    (void)argc;
    
    printf("trim: %s\n", ft_strtrim(argv[1], argv[2]));
    return 0;
}*/

/*int main(int argc, char **argv)
{
    (void)argc;
    
    printf("join: %s\n", ft_strjoin(argv[1], argv[2]));
    return 0;
}*/

/*int main(int argc, char **argv)
{
    (void)argc;
    
    printf("substract: %s\n", ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
    return 0;
}*/

/*int main(int argc, char **argv)
{
    (void)argc;
    
    printf("duplicate: %s\n", ft_strdup(argv[1]));
    return 0;
}*/

/*int main()
{
    printf("ft_strlen: %d\n", ft_strlen("allo"));
    return 0;
}*/

/*int main()
{
    unsigned char *s;
    int x;
    size_t r = 6;
    
    x = 5;
    ft_memset(s, x, r);
    return 0;
}*/

/*int main(int argc, char **argv)
{
    (void)argc;
    
    printf("ft_atoi: %d\n", ft_atoi(argv[1]));
    printf("atoi: %d\n", atoi(argv[1]));
    return 0;
}*/

/*int main()
{
    int i;
    char little[50] = "o";
    char big[50] = "allo yo man";
    
    printf("str: %s\n", ft_strnstr(big, little, 4));
    return (0);
}*/

/*int main()
{
    const char src[100] = "Allo";
    char dest[100] = "maman";
    
    printf("test: %d\n", ft_strlcat(dest, src, 6));
    return 0;
}*/

/*int main()
{
    int i;
    char s[20] = "allo";
    
    i = 90;
    printf("%s\n", ft_strchr(s, i));
    return 0;
}*/

/*int main()
{
    int i1;
    
    char str1[20] = "prout";

    i1 = 98;

    printf("blabla %s\n", ft_strchr((const char *)str1, i1));
    return (0);
}*/

/*int main()
{
    printf ("%d\n", ft_strncmp("aaab", "aaad", 10));
    return 0;
}*/

/*int main()
{
	char src[10]	= "ab121";
	char dest[10]	= "12123123";

	size_t  nb2 = 8;
//	printf("Str: %ld \n", strlcpy(dest1, src1, nb));
	printf("Str: %u", ft_strlcpy(dest, src, nb2));
	return (0);
}*/