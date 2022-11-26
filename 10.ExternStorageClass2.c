#include<stdio.h>

// This is definition of variable i
int i = 10;

void fun()
{
    printf("\nInside function fun which is extern");
}

/*
Compiling and executing above program:
1. gcc 10.ExternStorageClass1.c 10.ExternStorageClass2.c -o myexe
2. myexe
*/