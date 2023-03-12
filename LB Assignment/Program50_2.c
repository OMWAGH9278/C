/*
    Input :     577
    Output :    1
*/

#include <stdio.h>

typedef unsigned int UINT;

/*
    1111    1111    1111    1111    1111    1101    1011    1111
    F       F       F       F       F       D       B       F

    0XFFFFFDBF
*/

UINT offBit(UINT iNo)
{
    UINT mask = 0XFFFFFDBF;
    UINT result = 0;

    result = iNo & mask;

    return (result);
}

int main(void)
{
    UINT value = 0;
    UINT iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    iRet = offBit(value);
    printf("Required number is : %d\n", iRet);

    return (0);
}