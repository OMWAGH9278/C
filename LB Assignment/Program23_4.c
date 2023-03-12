// Accept character from user and check whether it is small case alphabet or not

// Input :  g
// Output : TRUE

// Input :  D
// Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case Alphabet\n");
    }
    else if(bRet == -1)
    {
        printf("It is not a Alphabet\n");
    }
    else
    {
        printf("It is not a small case Alphabet\n");
    }

    return 0;
}