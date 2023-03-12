// Check whether accepted character is a vowel(a,e,i,o,u) or not

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cAlphabet)
{
    if((cAlphabet == 'a')||(cAlphabet == 'e')||(cAlphabet == 'i')||(cAlphabet == 'o')||(cAlphabet == 'u'))
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    } 
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}