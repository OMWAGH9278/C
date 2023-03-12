#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int displayN(char* filename, int iSize)
{
    int fd = 0;
    char data[100];

    fd = open(filename,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return (-1);
    }

    read(fd,data,iSize);
    write(1,data,iSize);

    close(fd);
}

int main(void)
{
    char filename[20];
    int iSize = 0;

    printf("Enter filename :\n");
    scanf("%s", filename);
    printf("Enter number of characters :\n");
    scanf("%d", &iSize);

    displayN(filename, iSize);
    
    return (0);
}