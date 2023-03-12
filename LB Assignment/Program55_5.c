
// Input :      5
// Output :     120

#include <stdio.h>
#include <stdlib.h>

int mult(int value)
{
    static int prod = 1;
    int idigit = 0;

    if(value != 0)
    {
        idigit = value % 10;
        prod = prod * idigit;
        mult(value / 10);
    }
    return (prod);
}

int main(void)
{
    int value = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    iRet = mult(value);
    printf("Product of digits : %d\n", iRet);

    return (0);
}