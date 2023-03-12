#include<stdio.h>

void strlwrX( char *str)
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
    char cRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n]s",arr);

    strlwrX(arr);

    printf("String after conversion is : %s\n",arr);

    return 0;
}