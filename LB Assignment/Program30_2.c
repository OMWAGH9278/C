// Write a program to display palindrome elements from singly linked list

// Function Prototype :
// void DisplayPalindrome(PNODE Head)
// Input Linked List : |11|->|28|->|17|->|414|->|6|->|89|
// Output : 11  6   414

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else  
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements of linked list are :\n");

    while(First != NULL)
    {
        printf("|%d|->",First->data);
        First = First->next;
    }

    printf("NULL\n");
}

void DisplayPalindrome(PNODE First)
{
    int iDigit = 0, iTemp = 0, iRev = 0;

    while(First != NULL)
    {
        iTemp = First->data;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iTemp = iTemp / 10;
            iRev = (iRev * 10) + iDigit;
        }

        if((First->data) == iRev)
        {
            printf("%d\t",First->data);
        }

        iRev = 0;
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 414);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 11);

    Display(Head);

    DisplayPalindrome(Head);

    return 0;
}