
// Input :      6
// Output :     a   b   c   d   e   f   

#include <stdio.h>
#include <stdlib.h>

void display(int value)
{
    static char ch = 'a';

    if(value > 0)
    {
        printf("%c\t", ch);
        ch++;
        display(--value);
    }
    
}

int main(void)
{
    int value = 0;

    printf("Enter number :\n");
    scanf("%d", &value);

    display(value);

    return (0);
}