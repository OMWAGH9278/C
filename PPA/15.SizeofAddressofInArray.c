#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("Base address of Arr: %p\n",Arr);
    printf("Base address of Arr: %p\n",&Arr);
    printf("Size of Arr: %d\n",sizeof(Arr));

    return 0;
}