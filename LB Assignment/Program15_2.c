
// Accept n numbers and return difference between frequency of even numbers and odd numbers

// Input : N  :       7
//         Elements : 85 66 3 80 93 88 90
// Output : 1

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
        else 
        {
            iOddCnt++;
        }
    }

    return iEvenCnt - iOddCnt;
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

    iRet = Frequency(ptr,iLength);

    printf("Result is : %d\n",iRet);

    return 0;
}