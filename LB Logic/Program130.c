#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = IsDigit(cValue);

    if(bRet == true)
    {
        printf("%c is a numeric letter\n",cValue);
    }
    else
    {
        printf("%c is not a numeric letter\n",cValue);      
    }

    return 0;
}