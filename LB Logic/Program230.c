#include <stdio.h>

void displayR(int arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", arr[iCnt]);
    }
}

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};

    displayR(arr, 5);

    return (0);
}