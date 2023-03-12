// Write a program to accept string and a character and display that reverse string

// Input : "abcd"
// Output : "dcba"

// Input : "abba"
// Output : "abba"

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char cTemp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        cTemp = *start;
        *start = *end;
        *end = cTemp;

        start++;
        end--;
    }
}

int main()
{
    char arr[30];

    printf("Enter String :\n");
    scanf("%[^'\n]s",arr);

    StrRevX(arr);

    printf("Modified String is : %s",arr);

    return 0;
}