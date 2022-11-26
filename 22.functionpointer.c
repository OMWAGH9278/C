#include<stdio.h>

void fun()
{
    printf("Inside fun\n");
}

int addition(int no1,int no2)
{
    int sum;
    sum = no1 + no2;
    return sum;
}

int main()
{
    int ret = 0;
    fun();  // function call
    void (*fptr1)();

    fptr1 = fun;
    fptr1();

    int (*fptr2)(int,int);
    fptr2 = addition;
    
    ret = addition(10,11);
    printf("Sum is :  %d\n", ret);
    ret = fptr2(10,11);
    printf("Sum is :  %d\n", ret);


    return 0;
}