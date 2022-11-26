#include<stdio.h>

// Structure declaration
struct demo
{
    int i;
    float f;
    int j;
    double d;    // Causes padding i.e extra size of structure
    char c;      // Causes more padding 
};

int main()
{
    struct demo obj1;      // memory allocated hence
    struct demo obj2;
    struct demo obj3;

    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51;

    printf("size of obj1 :  %d\n", sizeof(obj1));
    printf("size of obj2 :  %d\n", sizeof(obj2));
    printf("i of obj2 is :  %d\n", obj2.i);

    return 0;
}