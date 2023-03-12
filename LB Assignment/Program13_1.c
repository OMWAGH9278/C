
// Display count of even digits of accepted number

// Input :  2395
// Output : 1

// Input :  1018 
// Output : 2

// Input : -1018
// Output : 2

// Input :  8462 
// Output : 4

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
    }

    return iEvenCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}