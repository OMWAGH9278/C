
// Accept n numbers and return frequency of 11

// Input : N  :       6
//         Elements : 85 66 3 15 93 88
// Output : 0

// Input : N  :       6
//         Elements : 85 11 3 15 11 111
// Output : 2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iSize)
{
    int iCnt = 0;
    int iElevenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == 11)
        {
            iElevenCnt++;
        }
    }

    return iElevenCnt;
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