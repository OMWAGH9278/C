// Accept N numbers from user and return product of all odd numbers

// Input : N :        6
//         Elements : 15  66  3  70  10  88
// Output : 45

// Input : N :        6
//         Elements : 44  66  72  70  10  88
// Output : 0

#include<stdio.h>
#include<stdlib.h>

int Product(int arr[], int iLength)
{
    int iCnt = 0, iOddCnt = 0, iOddMult = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((arr[iCnt] % 2) != 0)
        {
            iOddMult = iOddMult * arr[iCnt];
            iOddCnt++;
        }
    }

    if(iOddCnt == 0)
    {
        return 0;
    }
    else
    {
        return iOddMult;
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = Product(p,iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
}