#include <stdio.h>
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
    int fd = 0, length = 0, iSum = 0;

    printf("Enter filename :\n");
    scanf("%s", filename);

    fd = openFile(filename);
    if(fd == -1)
    {
        puts("Unable to open file");
        return (-1);
    }

    while((length = read(fd,data,sizeof(data))) != 0)
    {
        iSum = iSum + length;
    }

    printf("File size is : %d\n", iSum);

    close(fd);

    return (0);
}