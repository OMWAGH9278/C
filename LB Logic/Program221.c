#include <stdio.h>

int strlenR(char* str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlenR(str);
    }

    return (iCnt);
}

int main(void)
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    iRet = strlenR(arr);
    printf("String length is : %d\n", iRet);

    return (0);
}