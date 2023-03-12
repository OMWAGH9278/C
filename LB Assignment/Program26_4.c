// Write a program to accept string from user and display only digits from string

// Input : "marve89llous121"
// Output : "89121"

// Input : "Demo"
// Output : 

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            printf("",*str);
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
           printf("",*str); 
        }
        else
        {
            printf("%c",*str);
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}