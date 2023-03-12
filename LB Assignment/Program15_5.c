
// Accept n numbers and a number return frequency of that number

// Input : N  :       6
//         No :       66
//         Elements : 85 66 3 66 93 88
// Output : 2

// Input : N  :       6
//         No :       12
//         Elements : 85 11 3 15 11 111
// Output : 0

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iSize, int iNo)
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
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iValue = 0;
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

    printf("Enter number to find frequency :\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr,iLength,iValue);

    printf("Result is : %d\n",iRet);

    return 0;
}