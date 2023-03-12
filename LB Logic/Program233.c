#include <stdio.h>

int displayAdditionR(int arr[], int iSize)
{
    static int iCnt = 0;
    static int sum = 0;

    if(iCnt < iSize)
    {
        printf("%d\n", arr[iCnt]);
        sum = sum + arr[iCnt];
        iCnt++;
        displayAdditionR(arr, iSize);
    }
    return (sum);
}

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int iRet = 0;

    iRet = displayAdditionR(arr, 5);
    printf("Addition of elements of array : %d\n", iRet);

    return (0);
}