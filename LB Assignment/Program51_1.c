/*
    Input :     10      2
    Output :    TRUE
*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

BOOL chkBit(UINT iNo, int iPos)
{
    UINT mask = 0;
    UINT result = 0;

    mask = 1 << (iPos - 1);

    result = iNo | mask;

    if(result == iNo)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main(void)
{
    UINT value = 0;
    int position = 0;
    BOOL bRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    printf("Enter position :\n");
    scanf("%d", &position);

    bRet = chkBit(value, position);

    if(bRet = 1)
    {
        puts("TRUE");
    }
    else
    {
        puts("FALSE");
    }

    return (0);
}
