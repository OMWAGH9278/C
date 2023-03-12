
// Input :      5
// Output :     5   *   4   *   3   *   2   *   1   *

#include <stdio.h>
#include <stdlib.h>

void display(int value)
{
    if(value > 0)
    {
        printf("%d  *\t", value);
        display(--value);
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