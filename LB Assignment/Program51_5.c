
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

UINT toggleFirstLastNibble(UINT iNo)
{
    UINT mask1 = 0xFFFFFFFF;
    UINT mask2 = 0xFFFFFFFF;
    UINT mask = 0;
    UINT result = 0;

    mask1 = mask1 << (4);
    mask2 = mask2 >> (4);
    mask = mask1 ^ mask2;

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

    iRet = toggleFirstLastNibble(value);

    printf("Required number is : %u\n", iRet);

    return (0);
}
