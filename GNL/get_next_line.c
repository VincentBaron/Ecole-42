#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "get_next_line.h"

int check_end_of_line(char *buf)
{
    int i;
    
    i = 0;
    while (buf[i])
    {
        if (buf[i] == '\n')
            break;
        i++;
    }
    if (buf[i] == '\0')
        return (0);
    return (i);
}

#define BUFFER_SIZE  30

int get_next_line(int fd, char **line)
{
    int ret;
    int x;
    char buffer[BUFFER_SIZE + 1];
    char *temp;
    
    temp = NULL;
    while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[ret] = '\0';
        temp = ft_strjoin(buffer, temp);
        if ((x = check_end_of_line(temp)) != 0)
        {
            ret = 1;
            break;
        }
    }
    *line = ft_strndup(temp, x);
    return (ret);
}

int main()
{
    int fd;
    char *line;
    
    fd = open("monologue_cleopatre.txt", O_RDONLY);
    if (fd == -1)
    {
        printf ("error open");
        return 1;
    }
    get_next_line(fd, &line);
    printf("line 1: %s\n", line);
    return 0;
}