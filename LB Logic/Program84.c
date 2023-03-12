#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("  %d  ",arr[iCnt]);
    }
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements :\n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Elements in Reverse order :\n");
    DisplayReverse(ptr,iLength);

    free(ptr);

    return 0;
}