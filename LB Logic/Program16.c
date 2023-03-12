#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Program : To demonstrate iteration using for loop
//  Input   : No Input
//  Output  : String
//  Author  : Om Mangesh Wagh
//  Date    : 17-10-2022
//
///////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Jay Ganesh..\n");
    }
}

// 1 : Write the common statement in the loop
// 2 : Check whether the number of iterations are already known or not
// 3 : If iteration count is fixed go for for loop
// 4 : If iteration count is not fixed then go for while loop

int main()
{
    Display();

    return 0;
}