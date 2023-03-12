
// Find Odd factorial of given number

#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iOddFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)  // Time complexity = n
    {
        if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    // for(iCnt = 1; iCnt <= iNo; iCnt+=2)  // Time complexity = n/2
    // {
    //     if((iCnt % 2) != 0)
    //     {
    //         iOddFact = iOddFact * iCnt;
    //     }
    // }

    return iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}