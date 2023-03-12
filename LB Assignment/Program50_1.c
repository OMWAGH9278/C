/*
    Input :     79
    Output :    15
*/

#include <stdio.h>

typedef unsigned int UINT;

/*
    1111    1111    1111    1111    1111    1111    1011    1111
    F       F       F       F       F       F       B       F

    0XFFFFFFBF
*/

UINT offBit(UINT iNo)
{
    UINT mask = 0XFFFFFFBF;
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