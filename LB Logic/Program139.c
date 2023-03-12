#include<stdio.h>

int CountCh(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[10];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n]s",arr);

    iRet = CountCh(arr);

    printf("Frequency of a and A is : %d\n",iRet);

    return 0;
}