#include <stdio.h>

int countDigitsI(int No)
{
    int iCnt = 0;
    while(No != 0)
    {
        iCnt++;
        No = No / 10;
    }
    return (iCnt);
}

int main(void)
{
    int value = 0; 
    int Ret = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    Ret = countDigitsI(value);
    printf("Number of digits is : %d\n", Ret);

    return (0);
}