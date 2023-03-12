#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)  //  6, 28, 496, 8128
{
    int iCnt = 0;
    int iSum = 0;
    
    for( iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(( iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is a perfect number",iValue);
    }
    else
    {
        printf("%d is not a perfect number",iValue);
    }

    return 0;
}