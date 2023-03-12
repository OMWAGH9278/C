#include<stdio.h>

struct Demo
{
    int no;                // 4
    struct Demo *next;     // 8
};                         // 12

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.no = 11;
    obj2.no = 51;
    obj3.no = 91;

    obj1.next = &obj2;      // Linked List
    obj2.next = &obj3;
    obj3.next = NULL;
    
    printf("First Object :  %d\n", obj1.no);
    printf("Address in First Object :  %p\n", obj1.next);

    printf("Second Object :  %d\n", obj2.no);
    printf("Second Object :  %d\n", *obj1.next);
    printf("Address in Second Object :  %p\n", obj2.next);
    
    printf("Third Object :  %d\n", obj3.no);
    printf("Third Object :  %d\n", *obj2.next);
    printf("Address in Third Object :  %p\n", obj3.next);

    printf("Size of Object1 :  %d\n", sizeof(obj1));

    return 0;
}