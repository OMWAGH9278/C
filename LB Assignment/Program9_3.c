
// Find Even factorial of given number

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iEvenFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)  // Time complexity = n
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    // for(iCnt = 2; iCnt <= iNo; iCnt+=2)  // Time complexity = n/2
    // {
    //     if((iCnt % 2) == 0)
    //     {
    //         iEvenFact = iEvenFact * iCnt;
    //     }
    // }

    return iEvenFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}