#include <stdio.h>

int display(char* str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        printf("%c\n", *str);
        str++;
        display(str);
    }
}

int main(void)
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    display(arr);

    return (0);
}