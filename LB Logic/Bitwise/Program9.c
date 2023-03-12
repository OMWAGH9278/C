#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0010    0000    0000
//  0       0       0       0       0       2       0       0
//  00000200
//  0X00000200

bool checkBit(UINT No)
{
    UINT iMask = 0X00000200;
    UINT result = 0;

    result = No & iMask;

    if(result == iMask)
        return (true);
    else 
        return (false);
    
    // return ((result == iMask) ? true : false);
}

int main(void)
{
    UINT value = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &value);

    bRet = checkBit(value);

    if(bRet == true)
        printf("10th bit is on\n");
    else
        printf("10th bit is off\n");

    // ((bRet == true) ? printf("4th bit is on\n") : printf("4th bit is off\n"));

    return (0);
}