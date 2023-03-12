
// Input :      Hello
// Output :     5

#include <stdio.h>
#include <stdlib.h>

int strlen(char* str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlen(str);
    }
    
    return (iCnt);
}

int main(void)
{
    char str[20];
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%[^'\n']s", str);

    iRet = strlen(str);
    printf("Total characters : %d\n", iRet);

    return (0);
}