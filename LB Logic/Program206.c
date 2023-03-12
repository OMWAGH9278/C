#include <stdio.h>

void displayI()
{
    int iCnt = 1;  // auto storage class
    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void displayR()
{
    static int iCnt = 1;  // static storage class
    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        displayR();  // RECURSIVE CALL
    }
}

int main(void)
{
    displayR();

    return (0);
}