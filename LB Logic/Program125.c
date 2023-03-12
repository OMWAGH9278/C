#include<stdio.h>

int main()
{
    int i = 0;

    printf("\n_________________________________________________________\n");

    printf("ASCII table\n");

    printf("\n_________________________________________________________\n");

    printf("\nCharacter\t Decimal\t Hex \t Octal\n");

    for(i = 0; i <= 127; i++)
    {
        printf("    %c \t         %d \t     %x \t      %o\t\n",i,i,i,i);
    }

    printf("\n_________________________________________________________\n");

    return 0;
}