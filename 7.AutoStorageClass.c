#include<stdio.h>

// This is the default storage class for all local variables
/*
Storage Class : auto
Scope         : Local (inside the block)
Lifetime      : Local
Linkage       : No Linkage
Default Value : Garbage
*/

void fun( int l)
{
    auto int i;
    auto int j = 10;
    // auto keyword is optional
    int k = 30; // This is also auto variable
    printf("Scope of auto variable starts from here in function fun\n");
    printf("\nDefault value of uninitialised auto variable is %d", i);
    printf("\nScope of auto variables ends here in function fun\n");
}

int main()
{
    // This is not allowed to access auto variable outside its scope
    // printf("%d", i);
    fun(10);

    return 0;
}