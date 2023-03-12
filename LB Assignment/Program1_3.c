#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Program : Program to print 5 to 1 numbers on screen
//  Input   : No Input
//  Output  : Integer
//  Author  : Om Mangesh Wagh
//  Date    : 18/10/2022
//
///////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;
    for( i = 5; i >= 1; i--)
    {
        printf("%d",i);
    }
}

int main()
{
    Display();

    return 0;
}