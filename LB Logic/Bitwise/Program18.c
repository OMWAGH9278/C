#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool checkBit(UINT value, UINT position_1, UINT position_2)
{
    UINT iMask_1 = 0x00000001;  //  UINT iMask = 1;
    UINT iMask_2 = 0x00000001;
    UINT iMask = 0;
    UINT result = 0;

    if((position_1 < 1) || (position_1 > 32) || (position_2 < 1) || (position_2 > 32))
    {
        printf("Invalid position, it should be 1 to 32\n");
        return (false);
    }

    iMask_1 = iMask_1 << (position_1 - 1);
    iMask_2 = iMask_2 << (position_2 - 1);
    
    iMask = iMask_1 | iMask_2;

    result = value & iMask;

    if(result == iMask)
        return (true);
    else
        return (false);
}

int main(void)
{
    UINT value = 0;
    UINT position_1 = 0, position_2 = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &value);

    printf("Enter the first position of bit\n");
    scanf("%d", &position_1);
    printf("Enter the second position of bit\n");
    scanf("%d", &position_2);

    bRet = checkBit(value, position_1, position_2);

    if(bRet == true)
        printf("Bit at position %d and %d is ON\n", position_1, position_2);
    else
        printf("Bit at position %d and %d is OFF\n", position_1, position_2);

    return (0);
}