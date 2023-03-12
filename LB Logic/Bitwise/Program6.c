#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool checkBit(UINT No)
{
    UINT iMask = 8;
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
        printf("4th bit is on\n");
    else
        printf("4th bit is off\n");

    // ((bRet == true) ? printf("4th bit is on\n") : printf("4th bit is off\n"));

    return (0);
}