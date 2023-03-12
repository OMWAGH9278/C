#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Program : To demonstrate iteration using for loop
//  Input   : Integer
//  Output  : String
//  Author  : Om Mangesh Wagh
//  Date    : 17-10-2022
//
///////////////////////////////////////////////////////////////

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay Ganesh..\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number of iterations : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}