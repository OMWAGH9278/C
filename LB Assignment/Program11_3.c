
// Display addition of numbers within accepted range

// Input :  23  30
// Output : 212 

// Input :  10   18
// Output : 126

// Input :  -10 2
// Output : Invalid range

// Input :  90  18
// Output : Invalid range

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart > iEnd) || (iStart < 0))  // Filter
    {
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);
    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet == 0)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is : %d",iRet);
    }

    return 0;
}