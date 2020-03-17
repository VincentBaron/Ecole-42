#include <stdio.h>
#include <string.h>
#include "libft.h"

/*int main()
{
    int i;
    char s[20] = "allo";
    
    i = 90;
    printf("%s\n", ft_strchr(s, i));
    return 0;
}*/

int main()
{
    int i1;
    
    char str1[20] = "prout";

    i1 = 98;

    printf("blabla %s\n", ft_strchr((const char *)str1, i1));
    return (0);
}

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