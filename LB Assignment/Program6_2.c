
// Check accepted number is greater than 100 or not

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    return iNo;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet > 100)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}