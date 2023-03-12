#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Program : To print positive natural numbers
//  Input   : No Input
//  Output  : String
//  Author  : Om Mangesh Wagh
//  Date    : 17-10-2022
//
///////////////////////////////////////////////////////////////

void Display()
{
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
    }
}

int main()
{
    Display();

    return 0;
}