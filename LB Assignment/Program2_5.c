#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if( (iNo % 2) == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if( bRet == TRUE)
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is Odd\n");
    }

    return 0;
}