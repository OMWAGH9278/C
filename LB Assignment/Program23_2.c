// Accept character from user and check whether it is capital or not

// Input :  F
// Output : TRUE

// Input :  d
// Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        if((ch >= 'A') && (ch <= 'Z'))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Alphabet\n");
    }
    else if(bRet == -1)
    {
        printf("It is not a Alphabet\n");
    }
    else
    {
        printf("It is not a Capital Alphabet\n");        
    }

    return 0;
}