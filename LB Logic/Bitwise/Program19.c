#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

//  0000    1111    0000    1111    0000    1111    0000    1111
//  0       F       0       F       0       F       0       F

//  0X0F0F0F0F

bool toggleNible(UINT value)
{
    UINT iMask = 0X0F0F0F0F;
    UINT iAns = 0;

    iAns = value ^ iMask;

    return (iAns);
}

int main(void)
{
    UINT value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &value);

    iRet = toggleNible(value);
    printf("Updated number is : %u\n", iRet);
    
    return (0);
}