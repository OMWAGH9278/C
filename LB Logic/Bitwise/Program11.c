#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0001    1100    0000
//  0       0       0       0       0       1       C       0
//  000001C0
//  0X000001C0

bool checkBit(UINT No)
{
    UINT iMask = 0X000001C0;
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
        printf("7th, 8th and 9th bit is on\n");
    else
        printf("7th, 8th and 9th bit is off\n");

    // ((bRet == true) ? printf("4th bit is on\n") : printf("4th bit is off\n"));

    return (0);
}