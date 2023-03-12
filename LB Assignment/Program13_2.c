
// Display count of odd digits of accepted number

// Input :  2395
// Output : 3

// Input :  1018 
// Output : 2

// Input : -1018
// Output : 2

// Input :  8462 
// Output : 0

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iOddCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) != 0)
        {
            iOddCnt++;
        }
    }

    return iOddCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}