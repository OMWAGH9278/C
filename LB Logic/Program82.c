#include<stdio.h>
#include<stdlib.h>

int Maximum(int arr[], int iSize)
{
    int iCnt = 0;
    int iMax = arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > iMax)
        {
            iMax = arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;
    int iRet = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements :\n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Maximum(ptr,iLength);

    printf("The largest element in array is : %d",iRet);

    free(ptr);

    return 0;
}