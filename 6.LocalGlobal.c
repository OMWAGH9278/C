#include<stdio.h>

int x = 10;                 // Global variable Data

void demo()
{
    int b = 30;            // Local variable Stack

    printf("Value of b from demo: %d\n", b);
    printf("Value of x from demo: %d\n", x);
    // printf("%d", a); Not allowed

}

int main()
{
    int a = 20;            // Local variable Stack
    printf("Value of a from main: %d\n", a);
    printf("Value of x from main: %d\n", x);
    // printf("%d", b); Not allowed
    demo();                // Function call

    return 0;
}