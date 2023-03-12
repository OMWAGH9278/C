#include <stdio.h>

void displayR(int value)
{
    static int iCnt = 1;  // static storage class
    if(iCnt <= value)
    {
        printf("*\t");
        iCnt++;
        displayR(value);  // RECURSIVE CALL
    }
}

int main(void)
{
    int value = 0;
    printf("Enter number\n");
    scanf("%d", &value);
    displayR(value);
    printf("\nEnd of main\n");

    return (0);
}