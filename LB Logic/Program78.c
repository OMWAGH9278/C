#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform operation on array
int CalculateFrequency(int arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;
    int iValue = 0;
    int iRet = 0;

    // Step 1 : Accept size of aarray
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements :\n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter element to find frequency :\n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    iRet = CalculateFrequency(ptr,iLength,iValue);

    printf("Frequency of %d is : %d",iValue,iRet);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}