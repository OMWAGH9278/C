/*
    Input :     10      2
    Output :    8
*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

UINT offBit(UINT iNo, int iPos)
{
    UINT mask1 = 0xFFFFFFFF;
    UINT mask2 = 0;
    UINT mask = 0;
    UINT result = 0;

    mask2 = 1 << (iPos - 1);
    mask = mask1 ^ mask2;

    result = iNo & mask;

    return (result);
}

int main(void)
{
    UINT value = 0;
    int position = 0;
    UINT iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    printf("Enter position :\n");
    scanf("%d", &position);

    iRet = offBit(value, position);

    printf("Required number is : %u\n", iRet);

    return (0);
}
