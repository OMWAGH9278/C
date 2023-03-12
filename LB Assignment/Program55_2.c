
// Input :      879
// Output :     24

#include <stdio.h>
#include <stdlib.h>

int summation(int value)
{
    static int sum = 0;
    int idigit = 0;

    if(value != 0)
    {
        idigit = value % 10;
        value = value / 10;
        sum = sum + idigit;
        summation(value);
    }
    return (sum);
}

int main(void)
{
    int value = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    iRet = summation(value);
    printf("Summation of digits : %d\n", iRet);

    return (0);
}