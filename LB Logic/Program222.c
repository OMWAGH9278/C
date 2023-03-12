#include <stdio.h>

int countCapitalCaseR(char* str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
        countCapitalCaseR(str);
    }

    return (iCnt);
}

int main(void)
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    iRet = countCapitalCaseR(arr);
    printf("Number of capital alphabets is : %d\n", iRet);

    return (0);
}