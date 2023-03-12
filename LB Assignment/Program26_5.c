// Write a program to accept string from user and count number of white spaces

// Input : "MarvellouS"
// Output : 0

// Input : "MarvellouS Infosystems"
// Output : 1

// Input : "MarvellouS Infosystems by Piyush Manohar Khairnar"
// Output : 5

#include<stdio.h>

int CountWhite(char *str)
{
    int iWhiteCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iWhiteCnt++;
        }

        str++;
    }

    return iWhiteCnt;
}

int main()
{
    char arr[40];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}