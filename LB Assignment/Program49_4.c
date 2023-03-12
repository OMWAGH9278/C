
#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE     1
#define FALSE    0  

/*
    0000    0000    0000    0000    0000    0001    1100    0000
    0       0       0       0       0       1       c       0

    iMask = 0x00001c0
*/

BOOL chkBit(UINT iNo)
{
    UINT iMask = 0x00001c0;
    UINT iResult = 0;

    iResult = iNo | iMask;

    if(iResult == iNo)
        return (1);
    else
        return (0);
}

int main(void)
{
    UINT ivalue = 0;

    printf("Enter number : \n");
    scanf("%d", &ivalue);

    if(chkBit(ivalue) == 1)
        printf("7th and 8th and 9th bit is ON\n");
    else
        printf("7th and 8th and 9th bit is OFF\n");

    return (0);
}
