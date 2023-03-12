#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    int iTable = 0;

    printf("____________________________\n");
    printf("Table of %d is : \n",iNo);
    printf("____________________________\n");

    for( iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTable = iNo * iCnt;
        printf("| %2d |\n",iTable);
    }
    printf("____________________________\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    DisplayTable(iValue);

    return 0;
}