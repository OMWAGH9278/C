#include<stdio.h>

void demo()
{
    int a = 10;
    a++;                 // Increment value by 1
    printf("Value from demo is:  %d\n",a);
}

void hello()
{
    static int b = 10;
    b++;                 // Increment value by 1
    printf("Value from hello is:  %d\n",b);
}

int main()
{
    demo();
    demo();
    demo();

    hello();
    hello();
    hello();

    return 0;
}