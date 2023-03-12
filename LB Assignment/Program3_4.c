// Convert case of Accepted character

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c",cValue+32);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c",cValue-32);
    }
    else
    {
        printf("%c",cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}