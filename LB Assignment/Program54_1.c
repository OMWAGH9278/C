
// Input :      5
// Output :     *   *   *   *   *

#include <stdio.h>
#include <stdlib.h>

void display(int value)
{
    static int iCnt = 0;
    if(iCnt < value)
    {
        printf("*\t");
        iCnt++;
        display(value);
    }
}

int main(void)
{
    int value = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    display(value);

    return (0);
}