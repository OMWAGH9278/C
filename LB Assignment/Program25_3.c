// Write a program to accept string from user and return difference between frequency of small and capital letters

// Input : "MarvellouS"
// Output : 6

#include<stdio.h>

int Difference(char *str)
{
    int iLowerCnt = 0;
    int iCapitalCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iLowerCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCnt++;
        }

        str++;
    }

    return iLowerCnt-iCapitalCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference of small and capital alphabets in string : %d",iRet);

    return 0;
}