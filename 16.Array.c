#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};
    int *Aptr = Arr;
    int Brr[4];

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[4]);
    printf("%d\n",Arr[5]);
    printf("Size of array Arr : %d\n", sizeof(Arr));
    printf("%d\n", *Aptr);
    printf("Size of * Aptr : %d\n", sizeof(*Aptr));

    Brr[0] = 10;
    Brr[1] = 20;

    printf("%d\n",Brr[0]);
    printf("%d\n",Brr[1]);
    printf("%d\n",Brr[2]);
    printf("%d\n",Brr[3]);

    return 0;
}