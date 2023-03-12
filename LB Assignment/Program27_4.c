// Write a program to accept string and a character and return last occurence of that character

// Input : "Marvellous Multi OS"
//          M
// Output : 11

// Input : "Marvellous Multi OS"
//          e
// Output : 4

// Input : "Marvellous Multi OS"
//          W
// Output : -1

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iLastIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastIndex = iCnt;
        }

        str++;
        iCnt++;
    }

    if(iLastIndex == 0)
    {
        return -1;
    }
    else
    {
        return iLastIndex;
    }
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

    iRet = LastChar(arr,cValue);

    printf("Character location is : %d",iRet);

    return 0;
}