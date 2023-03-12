/*
    Input :     10  15      (1010   1111)
    Output :    2   4
*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

void commonBits(UINT iNo1, UINT iNo2)
{
    UINT iCnt = 1;

    while((iNo1) || (iNo2))
    {
        if(((iNo1 & 1)== 1) && ((iNo2 & 1)== 1))
            printf("%d\t", iCnt);

        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
        iCnt++;
    }

}

int main(void)
{
    UINT value1 = 0;
    UINT value2 = 0;

    printf("Enter first number :\n");
    scanf("%d", &value1);
    printf("Enter second number :\n");
    scanf("%d", &value2);

    commonBits(value1,value2);

    return (0);
}