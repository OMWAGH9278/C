// Accept N numbers from user and accept range, 
// Display all numbers of that range

// Input : N :        6
//         Start :    66
//         End :      90
//         Elements : 85  66  3  76  93  88
// Output : 66  76  88

// Input : N :        6
//         Start :    30
//         End :      50
//         Elements : 85  66  3  76  93  88
// Output : 

#include<stdio.h>
#include<stdlib.h>

void Range(int arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0, iIndex = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((arr[iCnt] >= iStart) && (arr[iCnt] <= iEnd))
        {
            printf("%d\t",arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    } 

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}