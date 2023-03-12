
// Output :     a   b   c   d   e   f

#include <stdio.h>
#include <stdlib.h>

void display()
{
    static char iChar = 'a';
    if(iChar <= 'f')
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