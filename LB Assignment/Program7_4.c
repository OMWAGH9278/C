
// Input :  14
// Output : 1 3 5 7 9 11 13

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo; iCnt+=2)  // Time Complexity = n/2
    {
        printf("  %d  ",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}