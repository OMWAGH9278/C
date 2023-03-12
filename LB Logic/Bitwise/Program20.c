#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT offBit(UINT value, UINT position)
{
    UINT iMask = 0x00000001;
    UINT result = 0;

    iMask = iMask << (position - 1);

    iMask = ~iMask;

    result = value & iMask;

    return (result);
}

int main(void)
{
    UINT value = 0;
    UINT position = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &value);

    printf("Enter the position : \n");
    scanf("%d", &position);

    iRet = offBit(value, position);
    printf("Updated number is : %d\n", iRet);
    
    return (0);
}