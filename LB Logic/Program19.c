#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Program : To demonstrate iteration using while loop
//  Input   : Integer
//  Output  : String
//  Author  : Om Mangesh Wagh
//  Date    : 17-10-2022
//
///////////////////////////////////////////////////////////////

void Display(int iValue)
{
    register int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("%d. Jay Ganesh..\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter number of iterations : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}