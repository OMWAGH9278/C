#include<stdio.h>
int main()
{
    int no1 = 11;    // Address- 100-104 Value-11
    int no2 = 22;    // Address- 200-204 Value-22
    int no3 = 33;    // Address- 300-304 Value-33
 
    int *p = NULL;   // Address- 400-408 Value-NULL
            
    printf("%p\n",p);

    // p = &no1;        // Address- 400-408 Value-100
    // printf("%p\n",p);

    // p = &no2;        // Address- 400-408 Value-200
    // printf("%p\n",p);

    // p = &no3;        // Address- 400-408 Value-300
    // printf("%p\n",p);

    return 0;
}