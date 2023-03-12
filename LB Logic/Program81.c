#include<stdio.h>
#include<stdlib.h>

int FirstOccurence(int arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
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

    printf("Enter number to find index:\n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter number to check for index :\n");
    scanf("%d",&iValue);

    iRet = FirstOccurence(ptr,iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no %d in array",iValue);
    }
    else
    {
        printf("Index of %d in array is : %d",iValue,iRet);
    }

    free(ptr);

    return 0;
}