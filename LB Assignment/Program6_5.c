
// Accept total and calculated marks to calculate percentage

#include<stdio.h>

float Percentage(int iTotal, int iCalculated)
{
    return (((float) iCalculated / (float) iTotal) * 100);
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter calculated marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %f\n",fRet);

    return 0;
}