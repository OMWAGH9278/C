
// Input :      6
// Output :     A   B   C   D   E   F   

#include <stdio.h>
#include <stdlib.h>

void display(int value)
{
    static char ch = 'A';

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