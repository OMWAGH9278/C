#include <stdio.h>
#include <fcntl.h>

int createFile(char* filename)
{
    int fd;
    fd = creat(filename,0777);
    puts("File created successfully");
    return (fd);
}

int main(void)
{
    char filename[20];

    printf("Enter filename :\n");
    scanf("%[^\n]s", filename);

    createFile(filename);

    return (0);
}