#include<stdio.h>

/*
Storage class : extern
Scope         : Throughout the program
Lifetime      : As long as the program's execution doesn't come to an end
Linkage       : External Linkage
Default value : Zero
*/

// This is also a variable having extern storage class 

int global = 10;

int main()
{
    // This is declaration of variable i
    // Effect of extern variable is only inside the block in which it is declared

    extern int i;

    // As like a variable we can also access the function which is defined outside

    extern void fun();

    // We cannot initialise extern variable
    // extern int i = 20;

    printf("Value of external variable i is %d", i);
    // Calling the function which is defined outside the file
    fun();
    return 0;
}