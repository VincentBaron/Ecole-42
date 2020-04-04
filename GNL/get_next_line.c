#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "get_next_line.h"

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

#define BUFFER_SIZE  30

int get_next_line(int fd, char **line)
{
    int ret;
    int x;
    char buffer[BUFFER_SIZE + 1];
    char *temp;
    char *tempx;
    
    
    //free(tempx);
    temp = NULL;
    if (*tempx)
        temp = ft_strndup(tempx, ft_strlen(tempx));
    while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[ret] = '\0';
        //printf("buffer 1: %s\n", buffer);
       //printf("temp 1: %s\n", temp);
        temp = ft_strjoin(buffer, temp);
        //printf ("buffer 2: %s\n", buffer);
        //printf("temp 2: %s\n", temp);
        if ((x = check_end_of_line(temp)) != 0)
        {
            ret = 1;
            break;
        }
    }
   // printf("temp 1: %s\n", temp);
    *line = ft_strndup(temp, x);
    tempx = ft_substr(temp, x);
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