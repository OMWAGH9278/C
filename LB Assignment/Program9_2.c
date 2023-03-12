
// Convert Dollar to Rupees

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRs = 0;

    iRs = iNo * 70;

    return iRs;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}