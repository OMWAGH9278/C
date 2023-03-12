#include <stdio.h>

typedef unsigned int UINT;

int countOnBits(UINT No)
{
    int iCnt = 0;
    int digit = 0;

    while(No != 0)
    {
        digit = No % 2;
        iCnt = iCnt + digit;  // Without if condition
        No = No / 2;
    }

    return (iCnt);
}

int main(void)
{
    UINT value = 0;
    int Ret = 0;

    printf("Enter number : \n");
    scanf("%d", &value);

    Ret = countOnBits(value);
    printf("Number of bits which are ON are : %d\n", Ret);

    return (0);
}