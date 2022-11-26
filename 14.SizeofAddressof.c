#include<stdio.h>

int main()
{
    char ch = 'A';
    char *cptr = &ch;
    int i = 11;
    float f = 3.14;
    double d = 9.567;

    printf("Values from variables are:\n");
    printf("charcter:  %c\n", ch);
    printf("integer:  %d\n", i);
    printf("float:  %f\n", f);
    printf("double:  %lf\n", d);

    printf("Size of each variable:\n");
    printf("Size of character:  %d\n", sizeof(ch));
    printf("Size of character pointer:  %d\n", sizeof(cptr));
    printf("Size of * character pointer:  %d\n", sizeof(*cptr));
    printf("Size of integer:  %d\n", sizeof(i));
    printf("Size of float:  %d\n", sizeof(f));
    printf("Size of double:  %d\n", sizeof(d));

    printf("Address of each variable:\n");
    printf("Address of character:  %p\n", &ch);
    printf("Address of integer:  %p\n", &i);
    printf("Address of float:  %p\n", &f);
    printf("Address of double:  %p\n", &d);
    return 0;
}