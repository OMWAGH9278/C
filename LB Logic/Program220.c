#include <stdio.h>

int strlenI(char* str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }

    return (iCnt);
}

int main(void)
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    iRet = strlenI(arr);
    printf("String length is : %d\n", iRet);

    return (0);
}