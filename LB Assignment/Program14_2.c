
// Accept n numbers and display elements divisible by 5

// Input :  N : 6
//          Elements : 85 66 3 80 93 88
// Output : 85  80

#include<stdio.h>
#include<stdlib.h>

void Display(int arr[], int iSize)
{
    int iCnt = 0;
    int iDivFive = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((arr[iCnt] % 5) == 0)
        {
            printf("%d\t",arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements :\n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display(ptr,iLength);

    free(ptr);

    return 0;
}