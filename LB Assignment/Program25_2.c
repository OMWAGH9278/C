// Write a program to accept string from user and count number of smallcase characters

// Input : "Marvellous"
// Output : 9

#include<stdio.h>

int CountSmall(char *str)
{
    int iLowerCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iLowerCnt++;
        }

        str++;
    }

    return iLowerCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Count of lowercase alphabets in string : %d",iRet);

    return 0;
}