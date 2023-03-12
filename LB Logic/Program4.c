#include<stdio.h>

int AdditiionOfNumbers(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0 ;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iRet = AdditiionOfNumbers(iValue1, iValue2);

    printf("Additiion is : %d\n",iRet);

    return 0;
}