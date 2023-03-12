
// Input :  4
// Output : * * * * # # # #

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)  // Time complexity = n
    {
        printf("  *  ");
    }
    for(iCnt = 0; iCnt < iNo; iCnt++)  // Time complexity = n
    {
        printf("  #  ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}