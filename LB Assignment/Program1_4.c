#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Program : Accept one number and check whether it is divisible by 5 or not
//  Input :   Integer
//  Output :  String
//  Author :  Om Mangesh Wagh
//  Date :    18/10/2022
//
/////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}