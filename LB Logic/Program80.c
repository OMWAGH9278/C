#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

// Step 5 : Perform operation on array
bool CheckOccurence(int arr[], int iSize, int iNo)
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
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;
    int iValue = 0;
    bool bRet = false;

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

    printf("Enter element to check occurence in array :\n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    bRet = CheckOccurence(ptr,iLength,iValue);

    if(bRet == true)
    {
        printf("There is %d in array\n",iValue);
    }
    else
    {
        printf("There is no %d in array\n",iValue);
    }

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}