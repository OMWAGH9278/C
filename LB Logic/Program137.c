#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0, i = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        iCnt++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = strlenX(arr);

    printf("Number of characters are %d\n",iRet);

    return 0;
}