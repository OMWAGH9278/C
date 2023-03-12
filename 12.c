#include<stdio.h>

extern int i;
extern int no1;
extern int no2;

extern void demo();

int main()
{
    demo();

    printf("Value of i is %d\n", i);
    printf("Value of no1 is:  %d\n", no1);
    printf("Value of no2 is:  %d\n", no2);
    
    return 0;
}
int i = 21;