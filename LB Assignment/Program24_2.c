// Accept character from user, if it is small alphabet display its corresponding capital,
// if it is capital display its corresponding small and in case of other display as it is.

// Input :  Q
// Output : q

// Input :  m
// Output : M

// Input :  4
// Output : 4

// Input :  %
// Output : %

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c",ch+32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c",ch-32);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}