
// Count frequency of digits less than 6 in accepted number

// Input :  2395
// Output : 3

// Input :  1018 
// Output : 3

// Input : 96672
// Output : 1

// Input :  9440 
// Output : 3

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d\n",iRet);

    return 0;
}