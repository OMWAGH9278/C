
// Check whether accepted number contains 0 or not

// Input :  2395
// Output : There is no Zero

// Input :  1018 
// Output : It contains Zero

// Input : -1018
// Output : It contains Zero

// Input :  9000 
// Output : It contains Zero

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            break;   
        }
        iNo = iNo / 10;
    }

    if(iNo > 0)
    {
        return TRUE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}