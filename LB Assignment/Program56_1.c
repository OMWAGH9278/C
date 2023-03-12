/*
    Input :     HE llo WOr lD
    Output :    3
*/

#include <stdio.h>

int whiteSpace(char* str)
{
    static int iCnt;
    static int i;
    if(str[i] != '\0')
    {
        if(str[i] == ' ')
            iCnt++;
        i++;
        whiteSpace(str);
    }
    return (iCnt);
}

int main(void)
{
    char str[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^\n]s", str);

    iRet = whiteSpace(str);
    printf("Number of white spaces are : %d\n", iRet);

    return (0); 
}
