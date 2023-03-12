// Accept division A, B, C and D and display respective exam time

// Input :  C
// Output : Your exam at 9:20 AM

// Input :  d
// Output : Your exam at 10:30 AM

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam at 7 AM\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam at 8:30 AM\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam at 9:20 AM\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam at 10:30 AM\n");
    }
    else
    {
        printf("There exists no such division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}