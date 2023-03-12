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
    int iNo1 = 1;
    int iNo2 = 2;
    int iNo3 = 3;
    int iNo4 = 4;
    int iNo5 = 5;
    int iSum = 0;

    iSum = iSum + iNo1;
    iSum = iSum + iNo2;
    iSum = iSum + iNo3;
    iSum = iSum + iNo4;
    iSum = iSum + iNo5;

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Summation();

    printf("Summation is : %d\n",iRet);

    return 0;
}