#include<stdio.h>

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
    struct demo obj;
    
    printf("size of obj :  %d\n", sizeof(obj));

    return 0;
}