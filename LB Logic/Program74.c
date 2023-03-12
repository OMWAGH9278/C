#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform operation on array
int EvenCount(int arr[], int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }

    return iEvenCnt;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;
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

    // Step 4 : Call the function
    iRet = EvenCount(ptr,iLength);

    printf("Count of Even elements is : %d",iRet);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}