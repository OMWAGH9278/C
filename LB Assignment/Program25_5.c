// Write a program to accept string from user and return string in reverse order

// Input : "MarvellouS"
// Output : "SuollevraM"

#include<stdio.h>

void Reverse(char *str)
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
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Reverse string is : %s\n",arr);

    return 0;
}