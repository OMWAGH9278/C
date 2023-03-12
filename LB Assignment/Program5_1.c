// Display multiplication of factors of accepted number

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
    iMult = 1;

    // printf(" ( ");
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  // Time Complexity = n/2
    {
        if((iNo % iCnt) == 0)
        {
            // if(iCnt != (iNo/2))
            // {
            //     printf(" %d * ",iCnt);
            // }
            // else 
            // {
            //     printf("%d ",iCnt);
            // }
            iMult = iMult * iCnt;
        }
    }
    // printf(")\t");

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}