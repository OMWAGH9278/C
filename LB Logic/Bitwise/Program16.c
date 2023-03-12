#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool checkBit(UINT value, UINT position)
{
    UINT iMask = 0X00000001;  // 1
    UINT result = 0;

    if((position < 1) || (position > 32))
    {
        printf("Invalid position, it should be between 1 to 32\n");
        return (false);
    }

    iMask = iMask << (position - 1);  // Dynamic Mask Formation

    result = value & iMask;

    if(result == iMask)
        return (true);
    else
        return (false);
}

int main(void)
{
    UINT value = 0;
    UINT position = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &value);

    printf("Enter the position of bit :\n");
    scanf("%d", &position);

    bRet = checkBit(value, position);

    if(bRet == true)
        printf("Bit at the position %d if ON\n", position);
    else
        printf("Bit at the position %d if OFF\n", position);

    return (0);
}