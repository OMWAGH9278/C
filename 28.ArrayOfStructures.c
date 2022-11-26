#include<stdio.h>

struct Student
{
    int Marks;          // 4
    float Percentage;   // 4
};                      // 8

int main()
{
    struct Student Arr[3];

    Arr[0].Marks = 91;
    Arr[0].Percentage = 91.45;

    Arr[1].Marks = 65;
    Arr[1].Percentage = 64.89;

    Arr[2].Marks = 87;
    Arr[2].Percentage = 87.21;
    
    printf("First Student Marks :  %d\n", Arr[0].Marks);
    printf("First Student Percentage :  %f\n\n", Arr[0].Percentage);

    printf("Second Student Marks :  %d\n", Arr[1].Marks);
    printf("Second Student Percentage :  %f\n\n", Arr[1].Percentage);

    printf("Third Student Marks :  %d\n", Arr[2].Marks);
    printf("Third Student Percentage :  %f\n\n", Arr[2].Percentage);

    printf("Size of Arr :  %d\n", sizeof(Arr));

    return 0;
}