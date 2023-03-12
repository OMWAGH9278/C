#include<stdio.h>
#include<stdlib.h>

int Minimum(int arr[], int iSize)
{
    int iCnt = 0;
    int iMin = arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < iMin)
        {
            iMin = arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(ptr,iLength);

    printf("The smallest element in array is : %d",iRet);

    free(ptr);

    return 0;
}