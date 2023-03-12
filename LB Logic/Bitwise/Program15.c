// toggle bits 5, 6, 7

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0111    0000
//  0       0       0       0       0       0       7       0
//  00000070
//  0X00000070

UINT toggleBit(UINT No)
{
    UINT iMask = 0X00000070;
    
    return (No ^ iMask);
}

int main(void)
{
    UINT value = 0;
    UINT uRet = 0;

    printf("Enter number : \n");
    scanf("%d", &value);

    uRet = toggleBit(value);
    printf("Updated number after toggled bits 5, 6 and 7 is : %d", uRet);

    return (0);
}