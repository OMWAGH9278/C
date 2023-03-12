#include <stdio.h>

void displayR(char* str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        displayR(str);
        printf("%s\n", str);
        str++;
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