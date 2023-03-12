#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int openFile(char* filename)
{
    int fd;
    fd = open(filename,O_RDWR);
    return (fd);
}

int main(void)
{
    char filename[20], data[100];
    int fd = 0;

    printf("Enter filename :\n");
    scanf("%s", filename);

    fd = openFile(filename);
    if(fd == -1)
    {
        puts("Unable to open file");
        return (-1);
    }

    printf("Enter data :\n");
    fflush(stdin);
    scanf("%[^'\n']s", data);

    write(fd,data,strlen(data));

    close(fd);

    return (0);
}