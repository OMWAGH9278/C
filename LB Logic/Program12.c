#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : DivisibleByFive
//  Description :   To check whether input is divisible by 3 & 5 or not
//  Input :         Integer
//  Output :        Integer
//  Author :        Om Mangesh Wagh (MI10708)
//  Date :          12/10/2022
//
////////////////////////////////////////////////////////////////////////

bool DivisibleByThreeAndFive(int iNo)
{
    int iAns1 = 0;
    int iAns2 = 0;
    
    iAns1 = iNo % 3;
    iAns2 = iNo % 5;

    if((iAns1 == 0) && (iAns2 == 0)) 
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = DivisibleByThreeAndFive(iValue);
    if(bRet == true)
    {
        printf("Number is divisible by both 3 and 5\n");
    }
    else
    {
        printf("Number is not divisible by 3 or 5\n");
    }

    return 0;
}