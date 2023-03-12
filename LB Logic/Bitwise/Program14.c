#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    1000
//  0       0       0       0       0       0       0       8
//  00000008
//  0X00000008

UINT toggleBit(UINT No)
{
    UINT iMask = 0X00000008;
    
    return (No ^ iMask);
}

int main(void)
{
    UINT value = 0;
    UINT uRet = 0;

    printf("Enter number : \n");
    scanf("%d", &value);

    uRet = toggleBit(value);
    printf("Updated number after toggled bit 4 is : %d", uRet);

    return (0);
}