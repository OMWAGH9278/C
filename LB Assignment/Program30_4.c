// Write a program to display smallest digits from all elements of singly linear linked list

// Function Prototype :
// void DisplaySmall(PNODE Head)
// Input Linked List : |11|->|250|->|532|->|415|
// Output : 1   0   2   1

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
    while(First != NULL)
    {
        printf("|%d|->",First->data);
        First = First->next;
    }

    printf("NULL\n");
}

void DisplaySmall(PNODE First)
{
    int iDigit = 0, iMin = 9;

    while(First != NULL)
    {
        while(First->data != 0)
        {
            iDigit = First->data % 10;
            First->data = First->data / 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
        }

        printf("%d\t",iMin);
        iMin = 9;
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 415);
    InsertFirst(&Head, 532);
    InsertFirst(&Head, 250);
    InsertFirst(&Head, 11);

    Display(Head);

    DisplaySmall(Head);

    return 0;
}