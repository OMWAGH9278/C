#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;

    for(iRev = 0; iNo != 0; iNo = iNo / 10)  // for(;;)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
    }

    if(iRev == iTemp)
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

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("%d is a Palindrome number\n",iValue);
    }
    else
    {
        printf("%d is not a Palindrome number\n",iValue);
    }

    return 0;
}