/*
    Input :     11
    Output :    3
*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

int countOne(UINT iNo)
{
    UINT count = 0;

    while(iNo != 0)
    {
        count = count + (iNo & 1);
        iNo = iNo >> 1;
    }

    return (count);
}

int main(void)
{
    UINT value = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    printf("Number of ON bits in number = %d\n", countOne(value));

    return (0);
}