// Accept character from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*)

// Input :  %
// Output : TRUE

// Input :  d
// Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch == '!')||(ch == '@')||(ch == '#')||(ch == '$')||(ch == '%')||(ch == '^')||(ch == '&')||(ch == '*'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}