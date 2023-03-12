/*
    Input :     10      3       7
    Output :    TRUE
*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

BOOL chkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT mask1 = 0;
    UINT mask2 = 0;
    UINT result1 = 0;
    UINT result2 = 0;

    mask1 = 1 << (iPos1 - 1);
    mask2 = 1 << (iPos2 - 1);

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
    int position1 = 0;
    int position2 = 0;
    BOOL bRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    printf("Enter position1 :\n");
    scanf("%d", &position1);
    printf("Enter position2 :\n");
    scanf("%d", &position2);

    bRet = chkBit(value, position1, position2);
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