
// Output :     5   4   3   2   1

#include <stdio.h>
#include <stdlib.h>

void display()
{
    static int iCnt = 5;
    if(iCnt > 0)
    {
        printf("%d\t", iCnt);
        iCnt--;
        display();
    }
}

int main(void)
{
    display();

    return (0);
}