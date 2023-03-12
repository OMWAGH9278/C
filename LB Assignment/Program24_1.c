// Display ASCII Table

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("\tSymbol\tDecimal\tHexadecimal\tOctal\n");

    for(iCnt = 0; iCnt < 256; iCnt++)
    {
        printf("   %c     %d       %x      %o\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}