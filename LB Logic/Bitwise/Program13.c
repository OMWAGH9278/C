#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

//  1111    1111    1111    1111    1111    1111    1111    0111
//  F       F       F       F       F       F       F       7
//  FFFFFFF7
//  0XFFFFFFF7

UINT offBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;
    
    return (No & iMask);
}

int main(void)
{
    UINT value = 0;
    UINT uRet = 0;

    printf("Enter number : \n");
    scanf("%d", &value);

    uRet = offBit(value);
    printf("Updated number is : %d", uRet);

    return (0);
}