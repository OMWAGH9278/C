#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("Numbers in decreasing order :\n");
    printf("_____________________________\n");
    for( iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
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