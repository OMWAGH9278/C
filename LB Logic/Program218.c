#include <stdio.h>

int countDigitsR(int No)
{
    static int iCnt = 0;
    if(No != 0)
    {
        iCnt++;
        No = No / 10;
        countDigitsR(No);
    }
    return (iCnt);
}

int main(void)
{
    int value = 0; 
    int Ret = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    Ret = countDigitsR(value);
    printf("Number of digits is : %d\n", Ret);

    return (0);
}