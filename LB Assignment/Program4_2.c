// Display factors of accepted number in decreasing order

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)  // Time Complexity = n/2
    {
        if((iNo % iCnt) == 0)
        {
            printf("  %d  ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}