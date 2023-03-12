#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int countCapital(char* filename)
{
    int iCnt = 0, fd = 0, length = 0, i = 0;
    char data[100];

    fd = open(filename,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return (-1);
    }

    while((length = read(fd,data,sizeof(data))) != 0)
    {
        for(i = 0; i < length; ++i)
        {
            if((data[i] >= 'A') && (data[i] <= 'Z'))
                iCnt++;
        }
    }
    close(fd);

    return (iCnt);
}

int main(void)
{
    char filename[20];
    int iRet = 0;

    printf("Enter filename :\n");
    scanf("%s", filename);

    iRet = countCapital(filename);
    printf("Capital characters in file are : %d\n", iRet);
    
    return (0);
}