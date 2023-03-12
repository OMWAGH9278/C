#include <stdio.h>

void displayBinary(unsigned int No)
{
    int digit = 0;
    while(No != 0)
    {
        digit = No % 2;
        printf("%d", digit);
        No = No / 2;
    }
    printf("\n");
}

int main(void)
{
    unsigned int value = 11;
    displayBinary(value);

    return (0);
}