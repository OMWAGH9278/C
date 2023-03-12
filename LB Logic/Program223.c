#include <stdio.h>

int countSmallCaseR(char* str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        countSmallCaseR(str);
    }

    return (iCnt);
}

int main(void)
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    iRet = countSmallCaseR(arr);
    printf("Number of small case alphabets is : %d\n", iRet);

    return (0);
}