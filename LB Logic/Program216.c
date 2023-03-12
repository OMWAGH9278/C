#include <stdio.h>
#include <stdbool.h>

bool checkPerfectR(int No)
{
    static int sum = 0;
    static int iCnt = 1;
    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            sum = sum + iCnt;
        }   
        
        ++iCnt;
        checkPerfectR(No);
    }

    if(sum == No)
        return (true);
    else
        return (false);
}

int main(void)
{
    int value = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d", &value);

    bRet = checkPerfectR(value);
    if(bRet == true)
        printf("%d is a perfect number\n", value);
    else
        printf("%d is not a perfect number\n", value);

    return (0);
}