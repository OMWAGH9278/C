#include<stdio.h>

void struprX( char *str)
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
    char cRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n]s",arr);

    struprX(arr);

    printf("String after conversion is : %s\n",arr);

    return 0;
}