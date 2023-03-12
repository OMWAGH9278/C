/*
    Input :     87983
    Output :    9
*/

#include <stdio.h>

int max(int i)
{
    static int iMax;
    int digit = 0;
    if(i != 0)
    {
        digit = i % 10;
        i = i / 10;
        if(digit > iMax)
            iMax = digit;
        max(i);
    }
    return (iMax);
}

int main(void)
{
    static int i;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &i);

    iRet = max(i);
    printf("Largest number is : %d\n", iRet);

    return (0); 
}
