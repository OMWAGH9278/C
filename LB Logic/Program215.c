#include <stdio.h>

int sumFactorsR(int No)
{
    static int sum = 0;
    static int iCnt = 1;
    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            sum = sum + iCnt;
        }   
        
        ++iCnt;
        sumFactorsR(No);
    }

    return (sum);
}

int main(void)
{
    int value = 0;
    int Ret = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    Ret = sumFactorsR(value);
    printf("Summation of factors is: %d\n", Ret);

    return (0);
}