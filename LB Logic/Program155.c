#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20];

    printf("Please enter string\n");
    scanf("%[^'\n]s",arr);

    strcpyX(arr,brr);  // strcpyX(100,200);

    printf("Copied string is : %s\n",brr);

    return 0;
}