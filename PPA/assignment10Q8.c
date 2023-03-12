#include<stdio.h>
int main()
{
    int no = 10;
    int *p = NULL;
    p = &no;
    printf("%d",no);
    printf("%d",*p);
    *p = 11;
    printf("%d",no);
    printf("%d",*p);

    return 0;
}