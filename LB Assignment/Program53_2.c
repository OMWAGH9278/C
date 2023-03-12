
// Output :     1   2   3   4   5

#include <stdio.h>
#include <stdlib.h>

void display()
{
    static int iCnt = 1;
    if(iCnt <= 5)
    {
        printf("%d\t", iCnt);
        iCnt++;
        display();
    }
}

int main(void)
{
    display();

    return (0);
}