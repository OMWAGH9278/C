#include <stdio.h>

int additionI(int No)
{
    int sum = 0;
    int iCnt = 1;

    while(iCnt <= No)
    {
        sum = sum + iCnt;
        iCnt++;
    }
    return (sum);
}

int main(void)
{
    int value = 0;
    int Ret = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    Ret = additionI(value);
    printf("Addition is : %d\n", Ret);

    return (0);
}