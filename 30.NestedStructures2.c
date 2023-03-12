#include <stdio.h>

struct Hello
{
    int C;
    int D;
    struct Demo
    {
        int A;
        float B;
    }dobj;
};

int main()
{
    struct Demo dobj;       // Defined only to print size of Demo
    struct Hello hobj;

    hobj.C = 11;
    hobj.D = 21;
    hobj.dobj.A = 31;
    hobj.dobj.B = 41.23;

    printf("Value of A :  %d\n", hobj.dobj.A);
    printf("Value of B :  %f\n", hobj.dobj.B);
    printf("Value of C :  %d\n", hobj.C);
    printf("Value of D :  %d\n", hobj.D);

    printf("Size of Demo :  %d\n", sizeof(dobj));
    printf("Size of Hello :  %d\n", sizeof(hobj));

    return 0;
}