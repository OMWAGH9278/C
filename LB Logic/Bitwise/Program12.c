#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

//  0000    0000    0010    0000    0000    0000    0000    0000
//  0       0       2       0       0       0       0       0
//  00200000
//  0X00200000

bool checkBit(UINT No)
{
    UINT iMask = 0X00200000;
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
        printf("22nd bit is on\n");
    else
        printf("22nd bit is off\n");

    // ((bRet == true) ? printf("4th bit is on\n") : printf("4th bit is off\n"));

    return (0);
}