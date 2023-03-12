#include <stdio.h>

void displayR(char* str)
{
    if(*str != '\0')
    {
        displayR(++str);
        printf("%s\n", str);
    }
}

int main(void)
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    displayR(arr);

    return (0);
}