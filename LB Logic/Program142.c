#include<stdio.h>

int CountFrequency(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n]s",arr);

    iRet = CountFrequency(arr,'a');

    printf("Frequency of a is : %d\n",iRet);

    return 0;
}