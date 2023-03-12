
// Accept n numbers and return frequency of even numbers

// Input : N  :       6
//         Elements : 85 66 3 80 93 88
// Output : 3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int arr[], int iSize)
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
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements :\n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = CountEven(ptr,iLength);

    printf("Result is : %d\n",iRet);

    return 0;
}