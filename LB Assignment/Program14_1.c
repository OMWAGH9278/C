
// Accept n numbers and find difference of even and odd elements

// Input :  N : 6
//          Elements : 85 66 3 80 93 88
// Output : 53

#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[], int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + arr[iCnt];
        }
        else 
        {
            iOddSum = iOddSum + arr[iCnt];
        }
    }

    return iEvenSum - iOddSum;
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

    printf("Enter elements :\n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Difference(ptr,iLength);

    printf("Result is : %d",iRet);

    free(ptr);

    return 0;
}