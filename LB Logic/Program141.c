#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(arr);

    printf("Frequency of uppercase is : %d\n",iRet);

    return 0;
}