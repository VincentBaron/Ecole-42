#include "get_next_line.h"

int main(int argc, char **argv)
{
    (void)argc;
    int fd;
    char *line;
    int ret;

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        printf ("error open");
        return (1);
    }
    while ((ret = get_next_line(fd, &line)) > 0)
    {    
        printf("%s\n", line);
        ft_free(line);
    }
    printf("%s\n", line);
    ft_free(line);
    if (close(fd) == -1)
    {
        printf("error close");
        return (1);
    }

    return 0;
}