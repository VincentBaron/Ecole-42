#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char *buffer, char *temp)
{
    int i;
    int tempnew;
    
    i = 0;
    if (temp == NULL)
        return buffer;
    if (!(tempnew = (char *)malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(temp) + 1))))
        return (NULL);
    while (*temp && *tempnew)
    {
        *tempnew = *temp;
        tempnew++;
        temp++;
    }
    while (*buffer && *tempnew)
    {
        *tempnew = *buffer;
        tempnew++;
        buffer++;
    }
    *tempnew = '\0';
    return (tempnew);
}

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
    char buffer[BUFFER_SIZE + 1];
    char *temp;
    
    temp = NULL;
    while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[ret] = '\0';
        temp = ft_strjoin(buffer, temp);
    }
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
        printf ("%s\n", *line);
    printf("FD : %d\n", fd);
    return 0;
}