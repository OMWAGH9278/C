// Write a program to accept string from user and count number of capital characters

// Input : "Marvellous Multi OS"
// Output : 4

#include<stdio.h>

int CountCapital(char *str)
{
    int iCapitalCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCnt++;
        }

        str++;
    }

    return iCapitalCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Count of capital alphabets in string : %d",iRet);

    return 0;
}