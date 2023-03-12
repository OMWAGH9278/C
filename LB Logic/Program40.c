#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("Numbers in decreasing order :\n");
    printf("_____________________________\n");
    iCnt = iNo;
    while( iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
    printf("\n______________________________\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}