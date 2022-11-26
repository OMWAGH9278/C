#include<stdio.h>
int main()
{
    int Arr[4] = {10,20,30,40};

    int *p = &(Arr[0]);

    int *q = &(Arr[3]);

    printf("%d\n", Arr[0]);
    printf("%d\n", *p);
    printf("%d\n", Arr[3]);
    printf("%d\n", *q);  
    
    return 0;
}