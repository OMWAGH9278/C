// Accept N numbers from user and display summation of digits of each number

// Input : N :        6
//         Elements : 8225  665  3  76  953  858
// Output : 17  17  3  13  17  21

#include<stdio.h>
#include<stdlib.h>

void Digits(int arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        while(arr[iCnt] != 0)
        {
            iDigit = arr[iCnt] % 10;
            arr[iCnt] = arr[iCnt] / 10;
            iSum = iSum + iDigit;
        }
        printf("%d\t",iSum);
        iSum = 0;
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

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

    Digits(p,iSize);

    free(p);

    return 0;
}