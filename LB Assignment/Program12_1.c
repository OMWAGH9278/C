
// Display digits of accepted number in reverse order

// Input :  2395
// Output : 5
//          9
//          3
//          2

// Input :  1018 
// Output : 8
//          1
//          0 
//          1

// Input : -1018
// Output : 8
//          1
//          0 
//          1

// Input :  9000 
// Output : 0
//          0
//          0
//          9

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        printf("%d\n",iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}