
// Convert Fahrenheit to Celsius

#include<stdio.h>

double FhToCs(float fTemp)
{
    return ((fTemp - 32.0) * (5.0/9.0));
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Celsius is %lf",dRet);

    return 0;
}