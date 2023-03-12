
// Display difference of summation of even and odd digits of accepted number

// Input :  2395
// Output : -15

// Input :  1018 
// Output : 6

// Input : 8440
// Output : 16

// Input :  5733 
// Output : -18

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigits = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while(iNo > 0)
    {
        iDigits = iNo % 10;
        iNo = iNo / 10;
        if((iDigits % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigits;
        }
        else
        {
            iOddSum = iOddSum + iDigits;
        }
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}