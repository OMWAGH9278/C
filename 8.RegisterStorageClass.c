#include<stdio.h>

/*
Storage Class    : register
Scope            : local (inside the block)
Lifetime         : local
Linkage          : No Linkage
Default Value    : Garbage
Memory Allocated : CPU registers

The register storage class specifier indicates to the compiler that the object should be stored in a machine register.
The register storage class specifier is typically specified for heavily used variables, such as a loop control variable,
in the hopes of enhancing performance by minimizing access time.
If the compiler does not allocate a machine register for a register object, the object is treated as having the storage
class specifier auto.

Register storage class is a request.
If the registers are available then our request is accepted.
We cannot declare register storage class variables in global scope
register int c;
*/

void fun()
{
    register int i;
    /*
    It is not allowed to create pointer to register variable in C
    int *p = &i; It is allowed in C++

    Any variable stored in CPU register does not depend on capacity of microprocessor.
    If the microprocessor has 16-bit register then they cannot hold a float value or a double value, which require 
    4 and 8 bytes respectively.
    If we use the register storage class for float, double variable then we wont get any error because compiler treat it 
    as default storage class i.e auto.
    */
    register double d = 3.12;
}

void gun()
{
    // This is better use of register storage class.
    register int i;
    for( i = 10; i>=0; --i)
    {
        printf(" %d ", i);
    }
}

int main()
{
    fun();
    gun();
    return 0;
}

