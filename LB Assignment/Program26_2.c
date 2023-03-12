// Write a program to accept string from user and convert it into uppercase

// Input : "Marvellous Multi OS"
// Output : "MARVELLOUS MULTI OS"

#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    struprX(arr);

    printf("Modified string is : %s",arr);

    return 0;
}