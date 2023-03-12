#include <stdio.h>

int displayR(char* str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        printf("%s\n", str);
        str++;
        displayR(str);
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