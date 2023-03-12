/*
    Input :     HElloWOrlD
    Output :    5
*/

#include <stdio.h>

int small(char* str)
{
    static int iCnt;
    static int i;
    if(str[i] != '\0')
    {
        if((str[i] >= 'a') && (str[i] <= 'z'))
            iCnt++;
        i++;
        small(str);
    }
    return (iCnt);
}

int main(void)
{
    char str[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^\n]s", str);

    iRet = small(str);
    printf("Number of small characters is : %d\n", iRet);

    return (0); 
}
