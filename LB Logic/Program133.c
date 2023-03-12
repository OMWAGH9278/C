#include<stdio.h>

int main()
{
    char arr[30];

    printf("Please enter your full name\n");
    // scanf("%s",arr);
    scanf("%[^'\n']s",arr);

    printf("Your name is : %s",arr);

    return 0;
}