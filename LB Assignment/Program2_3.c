#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//  Program : Accept number and for number < 10 print Hello otherwise Demo on screen
//  Input :   Integer
//  Output :  String
//  Author :  Om Mangesh Wagh
//  Date :    01/11/2022
//
/////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    if( iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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