// Display difference of summation of all factors and non factors of accepted number

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iFactDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)  // Time Complexity = n
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    printf("%d - %d = ",iSumFact,iSumNonFact);

    iFactDiff = iSumFact - iSumNonFact;

    return iFactDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}