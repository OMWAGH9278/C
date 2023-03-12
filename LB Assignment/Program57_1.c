#include <stdio.h>
#include <fcntl.h>

int createFile(char* filename)
{
    int fd;
    fd = creat(filename,0777);
    puts("File created successfully");
    return (fd);
}

int openFile(char* filename)
{
    int fd;
    fd = open(filename, O_RDONLY);
    puts("File opened successfully");
    return (fd);
}

int main(void)
{
    char filename[20];

    printf("Enter filename :\n");
    scanf("%[^\n]s", filename);

    createFile(filename);
    openFile(filename);

    return (0);
}