#include<stdio.h>
#include<stdbool.h>

bool CheckEven( int iNo)
{
    if( ( iNo % 2) == 0)   // % Modulus/Mod  == Equality
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter one number\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if( bRet ==true)
    {
        printf("It is Even number\n");
    }
    else
    {
        printf("It is Odd number\n");
    }

    return 0;
}