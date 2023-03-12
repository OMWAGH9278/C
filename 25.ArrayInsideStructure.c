#include<stdio.h>

struct Demo
{
    int Arr[3];
    float Brr[2];
};

int main()
{
    struct Demo obj;

    obj.Arr[0] = 11;
    obj.Arr[1] = 21;
    obj.Arr[2] = 31;

    obj.Brr[0] = 41.23;
    obj.Brr[1] = 51.34;

    printf("Array list of int type :  %d, %d & %d\n", obj.Arr[0], obj.Arr[1], obj.Arr[2]);
    printf("Array list of float type :  %f & %f\n", obj.Brr[0], obj.Brr[1]);
    
    printf("Size of Arr :  %d\n", sizeof(obj.Arr));
    printf("Size of Brr :  %d\n", sizeof(obj.Brr));

    return 0;
}