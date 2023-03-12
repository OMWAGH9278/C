/*
    Input :     137
    Output :    201
*/

#include <stdio.h>

typedef unsigned int UINT;

/*
    0000    0000    0000    0000    0000    0000    0100    0000
    0       0       0       0       0       0       4       0

    0x00000040
*/

UINT toggleBit(UINT iNo)
{
    UINT mask = 0x00000040;
    UINT result = 0;

    result = iNo ^ mask;

    return (result);
}

int main(void)
{
    UINT value = 0;
    UINT iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    iRet = toggleBit(value);
    printf("Required number is : %d\n", iRet);

    return (0);
}