
// Display multiplication of digits of accepted number

// Input :  2395
// Output : 270

// Input :  1018 
// Output : 8

// Input : 9440
// Output : 144

// Input :  922432 
// Output : 864

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigits = 0;
    int iMult = 1;

    while(iNo > 0)
    {
        iDigits = iNo % 10;
        iNo = iNo / 10;
        if(iDigits != 0)
        {
            iMult = iMult * iDigits;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}