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
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n]s",arr);

    printf("Enter character to find frequency\n");
    scanf(" %c",&cValue);

    iRet = CountFrequency(arr,cValue);

    printf("Frequency of %c is : %d\n",cValue,iRet);

    return 0;
}