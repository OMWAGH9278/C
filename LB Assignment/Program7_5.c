
// Input :  4
// Output : 4 8 12 16 20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt <= (iNo * 5); iCnt+=iNo)  // Time Complexity = n/(iNo * 5)
    {
        printf("  %d  ",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}