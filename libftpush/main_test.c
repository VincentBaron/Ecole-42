# include "libft.h"
# include <string.h>
#include <bsd/string.h>

//ft_strjoin

/*int main(int argc, char **argv)
{
    printf ("strjoin: %s\n", ft_strjoin(argv[1], argv[2]));
    return (0);
}*/

// ft_lstsize

/*t_list  *ft_finnish(void *x)
{
    t_list *y;
    
    y = (t_list *)x;
    y->content = "finnish";
    return (x);
}

int main(int argc, char **argv)
{
    t_list *list;
    t_list *head;
    t_list *map;
    int i;
    
    i = 1;
    list = NULL;
    while (i < argc)
    {
        ft_lstadd_back(&list, ft_lstnew(argv[i]));
        i++;
    }
    //printf("%s\n", (char *)list->content);
   //printf("lstsize list: %d\n", ft_lstsize(list));
   //last = ft_lstlast(list);
   //printf("lst_last: %s\n", (char *)last->content);
   i = 1;
   head = list;
    while (head != NULL)
   {
       printf("(*list).content %d: %s\n", i, (char *)head->content);
       head = head->next;
       i++;
   }
   map = ft_lstmap(list, &ft_finnish);
    return 0;
}*/

//ft_putnbr_fd

/*int main(int argc, char **argv)
{
    (void)argc;

    ft_putnbr_fd(atoi(argv[1]), 1);
    return 0;
}*/

// ft_itoa

/*int main(int argc, char **argv)
{
   (void)argc;
    printf("ft_itoa: %s\n", ft_itoa(atoi(argv[1])));
    //printf("itoa_test: %s\n", itoa(atoi(argv[1])));
    return 0;
}*/

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

/*int main(int argc, char **argv)
{
    printf("ft_strnstr: %s\n", ft_strnstr(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    printf("strnstr: %s\n", strnstr(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    return 0;
}*/

// ft_strlcat

/*int main(int argc, char **argv)
{
    char *dest;
    char *dest1;

    dest = strdup(argv[1]);
    dest1 = strdup(argv[1]);
   
    printf("ft_strlcat: %d\n", (int)ft_strlcat(dest, strdup(argv[2]), atoi(argv[argc - 1])));
    printf("dest1: %s\n", dest);
    printf("strlcat_ts: %d\n", (int)strlcat(dest1, strdup(argv[2]), atoi(argv[argc - 1])));
    printf("dest2: %s", dest1);
    return 0;
}*/

// ft_strlcpy

/*int main(int argc, char **argv)
{
    char *dest;
    char *dest1;

    dest = strdup(argv[1]);
    dest1 = strdup(argv[1]);
   
    printf("ft_strlcpy: %d\n", (int)ft_strlcpy(dest, strdup(argv[2]), atoi(argv[argc - 1])));
    printf("dest1: %s\n", dest);
    printf("strlcpy_ts: %d\n", (int)strlcpy(dest1, strdup(argv[2]), atoi(argv[argc - 1])));
    printf("dest2: %s", dest1);
    return 0;
}*/

// ft_strncmp

/*int main(int argc, char **argv)
{
    printf("ft_strncmp: %d\n", (int)ft_strncmp(argv[1], argv[2], atoi(argv[argc - 1])));
    printf("strncmp: %d\n", (int)strncmp(argv[1], argv[2], atoi(argv[argc - 1])));
    return 0;
}*/

// ft_strrchr

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

// ft_memmove

/*int main(int argc, char **argv)
{
    printf("ft_memmove: %s\n", ft_memmove(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    printf("memmove: %s\n", memmove(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    return 0;
}*/

// ft_memcmp

int main(int argc, char **argv)
{
    printf("ft_memcmp: %d\n", (int)ft_memcmp(argv[1], argv[2], atoi(argv[argc - 1])));
    printf("memcmp: %d\n", (int)memcmp(argv[1], argv[2], atoi(argv[argc - 1])));
    return 0;
}

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

/*// ft_memchr

int main(int argc, char **argv)
{
    printf("ft_memchr: %s\n", (char *)ft_memchr(strdup(argv[1]), atoi(argv[argc - 2]), atoi(argv[argc - 1])));
    printf("memchr: %s\n", (char *)memchr(strdup(argv[1]), atoi(argv[argc - 2]), atoi(argv[argc - 1])));
    return 0;
}*/

// ft_memccpy

/*int main(int argc, char **argv)
{
    printf("ft_memccpy: %s\n", (char *)ft_memccpy(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 2]), atoi(argv[argc - 1])));
    printf("memccpy: %s\n", (char *)memccpy(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 2]), atoi(argv[argc - 1])));
    return 0;
}*/

// ft_memcpy

/*int main(int argc, char **argv)
{
    printf("ft_memcpy: %s\n", (char *)ft_memcpy(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    printf("memcpy: %s\n", (char *)memcpy(strdup(argv[1]), strdup(argv[2]), atoi(argv[argc - 1])));
    return 0;
}*/
