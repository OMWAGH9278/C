#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Program : To find sum of numbers from 1 to n numbers
//  Input   : Integer
//  Output  : Integer
//  Author  : Om Mangesh Wagh
//  Date    : 18/10/2022
//
///////////////////////////////////////////////////////////////////

int Summation(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}