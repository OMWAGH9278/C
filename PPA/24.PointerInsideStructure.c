#include <stdio.h>

struct Demo
{
    int *ip;
    float *fp;
};

int main()
{
    int no = 11;
    float f = 21.34;

    struct Demo obj;

    obj.ip = &no;
    obj.fp = &f;

    printf("Value of no :  %d\n", *obj.ip);
    printf("Address of no :  %p\n", obj.ip);
    printf("Value of f :  %f\n", *obj.fp);
    printf("Address of f :  %p\n", obj.fp);

    return 0;
}