// Write a program to accept string from user and convert it into lowercase

// Input : "Marvellous Multi OS"
// Output : "marvellous multi os"

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strlwrX(arr);

    printf("Modified string is : %s",arr);

    return 0;
}