
// Display reverse numbers within accepted range

// Input :  23  30
// Output : 35 34 33 32 31 30 29 28 27 26 25 24 23 

// Input :  10   18
// Output : 18 17 16 15 14 13 12 11 10

// Input :  -10 2
// Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

// Input :  90  18
// Output : Invalid range

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)  // Filter
    {
        printf("Invalid range");
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf(" %d ",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);
    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}