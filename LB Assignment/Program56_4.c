/*
    Input :     87983
    Output :    3
*/

#include <stdio.h>

int min(int i)
{
    static int iMin = 9;
    int digit = 0;
    if(i != 0)
    {
        digit = i % 10;
        i = i / 10;
        if(digit < iMin)
            iMin = digit;
        min(i);
    }
    return (iMin);
}

int main(void)
{
    static int i;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &i);

    iRet = min(i);
    printf("Smallest number is : %d\n", iRet);

    return (0); 
}
