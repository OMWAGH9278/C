#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Program : Print given number of stars on screen
//  Input :   No Input
//  Output :  String
//  Author :  Om Mangesh Wagh
//  Date :    18/10/2022
//
////////////////////////////////////////////////////////////////////


void Accept(int iNo)
{
    int iCnt = 0;
    for( iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}