#include<stdio.h>

struct Student
{
    int Marks;
    int Age;
    char Division;
};

int main()
{
    struct Student obj;
    struct Student *ptr = NULL;

    ptr = &obj;

    ptr -> Marks = 91;         // Indirect Accessing Operator
    ptr -> Age = 22;
    ptr -> Division = 'C';
    
    printf("Students Marks :  %d\n", ptr->Marks);
    printf("Students Age :  %d\n", ptr->Age);
    printf("Students Division :  %c\n\n", ptr->Division);

    printf("Size of obj :  %d\n", sizeof(obj));

    return 0;
}