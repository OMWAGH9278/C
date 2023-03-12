// Write a program to accept string and a character and check whether that character is present in string

// Input : "Marvellous Multi OS"
//          e
// Output : TRUE

// Input : "Marvellous Multi OS"
//          W
// Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }

        str++;
    }

    if(*str == '\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char arr[30];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n]s",arr);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }
}