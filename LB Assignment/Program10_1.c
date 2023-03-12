
// Find area of circle

#include<stdio.h>

# define PI 3.14

double CircleArea(float fRadius)
{
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf",dRet);

    return 0;
}