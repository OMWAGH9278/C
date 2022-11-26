#include<stdio.h>

int main()
{
    int no1 = 10;
    const int no2 = 10;

    printf("%d\n", no1);
    printf("%d\n", no2);

    no1++;// no1 = no1 + 1;
    no2++;// no2 = no2 + 1;

    return 0;

}