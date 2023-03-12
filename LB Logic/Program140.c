#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    printf("Frequency of lowercase is : %d\n",iRet);

    return 0;
}