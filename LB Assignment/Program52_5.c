/*
    Input :     897      9       13
    Output :    7297
*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

UINT chkBit(UINT iNo, int start, int end)
{
    UINT mask1 = 0xFFFFFFFF;
    UINT mask2 = 0xFFFFFFFF;
    UINT mask = 0;
    UINT result = 0;

    mask1 = mask1 << (start - 1);
    mask2 = mask2 >> (32 - end);
    mask = mask1 & mask2;

    result = iNo ^ mask;

    return (result);
}

int main(void)
{
    UINT value = 0;
    int start = 0;
    int end = 0;
    UINT iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    printf("Enter start of range :\n");
    scanf("%d", &start);
    printf("Enter end of range :\n");
    scanf("%d", &end);

    iRet = chkBit(value, start, end);
    printf("Required number is : %d\n", iRet);

    return (0);
}