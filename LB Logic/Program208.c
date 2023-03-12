#include <stdio.h>

void displayR()
{
    static int iCnt = 1;  // static storage class
    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        displayR();  // RECURSIVE CALL
    }
    printf("\n");
}

int main(void)
{
    printf("Inside main\n");
    displayR();
    printf("End of main\n");

    return (0);
}