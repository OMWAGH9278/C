#include <stdio.h>

int sumDigitsR(int No)
{
    static int sum = 0;
    int digit = 0;
    if(No != 0)
    {
        digit = No % 10;
        No = No / 10;
        sum = sum + digit;
        sumDigitsR(No);
    }
    return (sum);
}

int main(void)
{
    int value = 0; 
    int Ret = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    Ret = sumDigitsR(value);
    printf("Summation of digits is : %d\n", Ret);

    return (0);
}