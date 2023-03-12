#include<stdio.h>

enum days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};   // Enum stored in Read Only Section

int main()
{
    enum days obj;
    int Arr[7] = { 260, 370, 400, 250, 280, 300, 290};

    printf("\nSalary On First Day Of Week :  %d\n",Arr[0]);
    printf("Salary On Second Day Of Week :  %d\n",Arr[1]);
    printf("Salary On Third Day Of Week :  %d\n",Arr[2]);
    printf("Salary On Fourth Day Of Week :  %d\n",Arr[3]);
    printf("Salary On Fifth Day Of Week :  %d\n",Arr[4]);
    printf("Salary On Sixth Day Of Week :  %d\n",Arr[5]);
    printf("Salary On Seventh Day Of Week :  %d\n",Arr[6]);

    printf("\nSalary On First Day Of Week :  %d\n",Arr[Monday]);      // Gives same output as above 
    printf("Salary On Second Day Of Week :  %d\n",Arr[Tuesday]);      // Enum gives better readability only
    printf("Salary On Third Day Of Week :  %d\n",Arr[Wednesday]);
    printf("Salary On Fourth Day Of Week :  %d\n",Arr[Thursday]);
    printf("Salary On Fifth Day Of Week :  %d\n",Arr[Friday]);
    printf("Salary On Sixth Day Of Week :  %d\n",Arr[Saturday]);
    printf("Salary On Seventh Day Of Week :  %d\n",Arr[Sunday]);    

    printf("\nsize of enum :  %d\n", sizeof(obj));
    printf("size of array :  %d\n", sizeof(Arr));

    return 0;
}