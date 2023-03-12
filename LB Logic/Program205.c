#include <stdio.h>

void displayI()
{
    int iCnt = 1;
    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

int main(void)
{
    displayI();

    return (0);
}