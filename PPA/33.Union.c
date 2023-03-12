#include<stdio.h>

struct Demo
{
    int i1;      // 4
    float f1;    // 4
    double d1;   // 8
};               // 16  Summation of sizes of all data types 

union Hello    // All concepts of structure are same in union except memory allocation
{
    int i2;      // 4
    float f2;    // 4
    double d2;   // 8
};               // 8   Size of largest data type

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("size of structure object :  %d\n", sizeof(dobj));
    printf("size of union object :  %d\n", sizeof(hobj));

    return 0;
}