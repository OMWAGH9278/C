
// Accept n numbers and check whether that numbers contain 11 or not

// Input : N  :       6
//         Elements : 85 66 11 80 93 88
// Output : 11 is present

// Input : N  :       6
//         Elements : 85 66 3 80 93 88
// Output : 11 is absent

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == 11)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return FALSE;
    }
    else 
    {
        return TRUE;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    BOOL bRet = FALSE;

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

    bRet = Check(ptr,iLength);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else 
    {
        printf("11 is absent\n");
    }

    free(ptr);

    return 0;
}