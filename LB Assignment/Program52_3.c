/*
    Input :     257
    Output :    TRUE
*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

/*
    0000    0000    0000    0000    0000    1001    0000    0000
    0       0       0       0       0       9       0       0

    0x00000900
*/

BOOL chkBit(UINT iNo)
{
    UINT mask1 = 0x00000100;
    UINT mask2 = 0x00000800;
    UINT result1 = 0;
    UINT result2 = 0;

    result1 = iNo | mask1;
    result2 = iNo | mask2;

    if((result1 == iNo) || (result1 == iNo))
        return (1);
    else
        return (0);
}

int main(void)
{
    UINT value = 0;
    BOOL bRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    bRet = chkBit(value);
    if(bRet == 1)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return (0);
}