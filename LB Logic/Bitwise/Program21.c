
#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT toggleBitInRange(UINT value, UINT start, UINT end)
{
    UINT iMask1 = 0XFFFFFFFF;
    UINT iMask2 = 0XFFFFFFFF;
    UINT iMask = 0;
    UINT result = 0;

    iMask1 = iMask1 << (start - 1);
    iMask2 = iMask2 >> (32 - end);

    iMask = iMask1 & iMask2;

    result = value ^ iMask;

    return (result);
}

int main(void)
{
    UINT value = 0;
    UINT start = 0, end = 0;
    UINT iRet = 0;

    printf("Enter value :\n");
    scanf("%d", &value);

    printf("Enter start bit position (included) of range :\n");
    scanf("%d", &start);
    printf("Enter end bit position (included) of range :\n");
    scanf("%d", &end);

    iRet = toggleBitInRange(value, start, end);
    printf("Updated value is : %d\n", iRet);

    return (0);
}