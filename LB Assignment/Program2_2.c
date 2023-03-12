#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Program : Accept number and print that number of stars on screen
//  Input :   Integer
//  Output :  String
//  Author :  Om Mangesh Wagh
//  Date :    01/11/2022
//
////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    while( iNo > 0)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}