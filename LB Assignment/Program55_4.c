
// Input :      5
// Output :     120

#include <stdio.h>
#include <stdlib.h>

int factorial(int value)
{
    static int fact = 1;

    if(value != 0)
    {
        fact = fact * value;
        factorial(--value);
    }
    return (fact);
}

int main(void)
{
    int value = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    iRet = factorial(value);
    printf("Factorial of number : %d\n", iRet);

    return (0);
}