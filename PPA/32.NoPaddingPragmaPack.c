#include<stdio.h>

#pragma pack(1)

struct demo
{
    int i;
    float f;
    int j;
    double d;    
    char c;       
};

int main()
{
    struct demo obj;
    
    printf("size of obj :  %d\n", sizeof(obj));

    return 0;
}