#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter string\n");
    scanf("%[^'\n]s",arr);

    printf("Enter character\n");
    scanf(" %c",&cValue);

    bRet = Check(arr,cValue);

    if(bRet == true)
    {
        printf("Character is present string\n");
    }
    else
    {
        printf("Character is not present in string\n");
    }

    return 0;
}