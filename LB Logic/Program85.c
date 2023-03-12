#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter element :\n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter number to check for index at last occurance :\n");
    scanf("%d",&iValue);

    iRet = LastOccurence(ptr,iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no %d in array",iValue);
    }
    else
    {
        printf("Last occurance index of %d in array is : %d",iValue,iRet);
    }

    free(ptr);

    return 0;
}