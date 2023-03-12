#include <stdio.h>

int factorialR(int No)
{
    static int mult = 1;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        mult = mult * iCnt;
        iCnt++;
        factorialR(No);
    }
    return (mult);
}

int main(void)
{
    int value = 0;
    int Ret = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    Ret = factorialR(value);
    printf("Factorial is : %d\n", Ret);

    return (0);
}