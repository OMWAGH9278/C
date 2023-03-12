#include<stdio.h>
#include<stdlib.h>

// float Average(int *arr, int iSize)
float Average(int arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;
    float fAvg = 0.0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + arr[iCnt];
    }

    fAvg = iSum / iSize;

    return fAvg;
}

int main()
{
    int * ptr = NULL;
    int iLength = 0, i = 0;
    float fRet = 0.0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Please enter the numbers :\n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    fRet = Average(ptr,iLength);

    printf("Average of elements of array is : %f",fRet);

    free(ptr);

    return 0;
}