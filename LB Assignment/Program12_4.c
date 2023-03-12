
// Count frequency of 4 in accepted number

// Input :  2395
// Output : 0

// Input :  1018 
// Output : 0

// Input : 922432
// Output : 1

// Input :  9440 
// Output : 2

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 4)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d\n",iRet);

    return 0;
}