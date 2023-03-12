// Accept character from user, if it is small alphabet display all characters from input till a,
// if it is capital display all characters fron input till Z, and in case of other display as it is.

// Input :  Q
// Output : Q  R  S  T  U  V  W  X  Y  Z

// Input :  m
// Output : m  l  k  j  i  h  g  f  e  d  c  b  a

// Input :  4
// Output : 

// Input :  %
// Output : 

#include<stdio.h>

void Display(char ch)
{
    char cCnt = '\0'; 

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t",cCnt);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t",cCnt);
        }
    }
    else
    {
        return;
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