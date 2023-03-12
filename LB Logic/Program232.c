#include <stdio.h>

void displayR(int arr[], int iSize)
{
    static int iCnt = 0;

    if(iCnt < iSize)
    {
        printf("%d\n", arr[iCnt]);
        iCnt++;
        displayR(arr, iSize);
    }
}

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};

    displayR(arr, 5);

    return (0);
}