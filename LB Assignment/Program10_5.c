
// Convert squarefoot to squaremeter 

#include<stdio.h>

double SquareMeter(int iNo)
{
    return ((double)iNo * 0.0929);
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square meter is %lf",dRet);

    return 0;
}