
#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE     1
#define FALSE    0  

/*
    0000    1000    0001    0000    0100    0000    0100    0000
    0       8       1       0       4       0       4       0

    iMask = 0x8104040
*/

BOOL chkBit(UINT iNo)
{
    UINT iMask = 0x8104040;
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
        printf("7th and 15th bit and 21st and 28th bit is ON\n");
    else
        printf("7th and 15th bit and 21th and 28th bit is OFF\n");

    return (0);
}
