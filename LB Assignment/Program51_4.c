/*
    Input :     10      3
    Output :    14
*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

UINT toggleBit(UINT iNo, int iPos)
{
    UINT mask = 0;
    UINT result = 0;

    mask = 1 << (iPos - 1);

    result = iNo ^ mask;

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

    iRet = toggleBit(value, position);

    printf("Required number is : %u\n", iRet);

    return (0);
}
