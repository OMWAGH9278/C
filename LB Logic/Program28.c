#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Program : To find sum of numbers from 1 to given number
//  Input   : No Input
//  Output  : Integer
//  Author  : Om Mangesh Wagh
//  Date    : 18/10/2022
//
///////////////////////////////////////////////////////////////////

int Summation()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 5; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Summation();

    printf("Summation is : %d\n",iRet);

    return 0;
}