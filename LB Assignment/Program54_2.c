
// Input :      5
// Output :     1   2   3   4   5

#include <stdio.h>
#include <stdlib.h>

void display(int value)
{
    static int iCnt = 1;
    if(iCnt <= value)
    {
        printf("%d\t", iCnt);
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