#include <stdio.h>

void factorsI(int No)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= (No/2); ++iCnt)
    {
        if((No % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }   
    }
}

int main(void)
{
    int value = 0;
    int Ret = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    printf("Factors are:\n");
    factorsI(value);

    return (0);
}