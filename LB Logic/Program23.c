#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Program : To print positive natural numbers
//  Input   : Integer
//  Output  : String
//  Author  : Om Mangesh Wagh
//  Date    : 17-10-2022
//
///////////////////////////////////////////////////////////////

void Display(int iValue)
{
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter total numbers : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}