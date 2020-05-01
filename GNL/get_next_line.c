#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "get_next_line.h"
#define BUFFER_SIZE  30

int check_error(int fd, char **line, char *tempx)
{
    if (fd == -1 || line == NULL)
        return (-1);
    if (!*tempx)
    {
        if (!(tempx = malloc(sizeof(char) * (BUFFER_SIZE+1))))
            return (-1);
    }
    return (0);
}

int check_end_of_line(char *temp)
{
    int i;
    
    i = 0;
    //printf ("temp check_end: %s\n", temp);
    while (temp[i])
    {
        if (temp[i] == '\n')
            break;
        i++;
    }
    if (temp[i] == '\0')
        return (0);
    return (i);
}

int get_next_line(int fd, char **line)
{
    int ret;
    int x;
    char buffer[BUFFER_SIZE + 1];
    char *temp;
    static char *tempx;
    
    
    //free(tempx);
    temp = NULL;
    if(check_error(fd, line, tempx) == -1)
        return (-1);
    if (*tempx)
        temp = ft_strndup(tempx, ft_strlen(tempx));
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
    tempx = ft_substr(temp, x + 1);
    free(temp);
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
    while (get_next_line(fd, &line) != 0)
    {    
        printf("%s\n", line);
    }
    return 0;
}