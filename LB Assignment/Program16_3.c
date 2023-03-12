// Accept N numbers from user and accept one another 
// number as NO, return index of last occurence of that NO

// Input : N :        6
//         NO :       66
//         Elements : 85  66  3  66  93  88
// Output : 3

// Input : N :        6
//         NO :       93
//         Elements : 85  66  3  66  93  88
// Output : 4

// Input : N :        6
//         NO :       12
//         Elements : 85  11  3  15  11  111
// Output : -1

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int arr[], int iLength, int iNo)
{
    int iCnt = 0, iIndex = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
    }
    
    if(iIndex == 0)
    {
        return -1;
    }
    else
    {
        return iIndex;
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

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

    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurence of number is %d\n",iRet);
    }

    free(p);

    return 0;
}