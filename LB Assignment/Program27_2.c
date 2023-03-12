// Write a program to accept string and a character and return frequency of that character

// Input : "Marvellous Multi OS"
//          M
// Output : 2

// Input : "Marvellous Multi OS"
//          W
// Output : 0

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iChCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iChCnt++;
        }

        str++;
    }

    return iChCnt;
}

int main()
{
    char arr[30];
    char cValue;
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n]s",arr);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is : %d",iRet);

    return 0;
}