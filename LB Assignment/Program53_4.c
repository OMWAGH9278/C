
// Output :     A   B   C   D   E   F

#include <stdio.h>
#include <stdlib.h>

void display()
{
    static char iChar = 'A';
    if(iChar <= 'F')
    {
        printf("%c\t", iChar);
        iChar++;
        display();
    }
}

int main(void)
{
    display();

    return (0);
}