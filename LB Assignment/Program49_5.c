
#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE     1
#define FALSE    0  

/*
    0000    1000    0000    0000    0000    0000    0000    0001
    0       8       0       0       0       0       0       1

    iMask = 0x08000001
*/

BOOL chkBit(UINT iNo)
{
    UINT iMask = 0x08000001;
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
        printf("First and Last bit is ON\n");
    else
        printf("First and Last bit is OFF\n");

    return (0);
}
