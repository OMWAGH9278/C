#include <stdio.h>

void factorsR(int No)
{
    static int iCnt = 1;
    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }   
        ++iCnt;
        factorsR(No);
    }
}

int main(void)
{
    int value = 0;
    int Ret = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    printf("Factors are:\n");
    factorsR(value);

    return (0);
}