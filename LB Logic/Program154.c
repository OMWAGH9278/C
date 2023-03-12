#include<stdio.h>

int CountSpace( char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSpace(arr);

    printf("Number of white spaces is : %d\n",iRet);

    return 0;
}