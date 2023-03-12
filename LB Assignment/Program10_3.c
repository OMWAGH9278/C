
// Convert Kilometers to Meters

#include<stdio.h>

int KMToMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance\n");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("meter is %d",iRet);

    return 0;
}