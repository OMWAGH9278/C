#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Program : To find factorial n number
//  Input   : Integer
//  Output  : Integer
//  Author  : Om Mangesh Wagh
//  Date    : 18/10/2022
//
///////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d\n",iValue,iRet);

    return 0;
}