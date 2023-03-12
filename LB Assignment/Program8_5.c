
// Display reverse table of given number

#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = (iNo * 10); iCnt >= iNo; iCnt-=iNo)  // Time complexity = n
    {
        printf("  %d  ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}