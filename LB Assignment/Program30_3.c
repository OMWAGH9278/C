// Write a program to display product of digits of all elements of singly linear linked list

// Function Prototype :
// void DisplayProduct(PNODE Head)
// Input Linked List : |11|->|20|->|32|->|41|
// Output : 1   2   6   4

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

void DisplayProduct(PNODE First)
{
    int iDigit = 0, iProduct = 1;

    while(First != NULL)
    {
        while(First->data != 0)
        {
            iDigit = First->data % 10;
            First->data = First->data / 10;
            if(iDigit == 0)
            {
                continue;
            }
            iProduct = iProduct * iDigit;
        }

        printf("%d\t",iProduct);
        iProduct = 1;
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    Display(Head);

    DisplayProduct(Head);

    return 0;
}