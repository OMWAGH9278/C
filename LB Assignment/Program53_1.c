
// Output :     *   *   *   *   *

#include <stdio.h>
#include <stdlib.h>

void display()
{
    static int iCnt = 0;
    if(iCnt < 5)
    {
        printf("*\t");
        iCnt++;
        display();
    }
}

int main(void)
{
    display();

    return (0);
}