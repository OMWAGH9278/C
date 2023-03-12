#include <stdio.h>

int additionR(int No)
{
    static int sum = 0;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        sum = sum + iCnt;
        iCnt++;
        additionR(No);
    }
    return (sum);
}

int main(void)
{
    int value = 0;
    int Ret = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    Ret = additionR(value);
    printf("Addition is : %d\n", Ret);

    return (0);
}