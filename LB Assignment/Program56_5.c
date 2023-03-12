/*
    Input :     523
    Output :    325
*/

#include <stdio.h>

int reverse(int i)
{
    static int rev;
    int digit = 0;
    if(i != 0)
    {
        digit = i % 10;
        i = i / 10;
        rev = (rev * 10) + digit;
        reverse(i);
    }
    return (rev);
}

int main(void)
{
    static int i;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &i);

    iRet = reverse(i);
    printf("Original number is : %d\n", i);
    printf("Reverse number is : %d\n", iRet);

    return (0); 
}
