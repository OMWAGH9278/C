// Write a program which display reverse of each element of singly linked list

// Function Prototype :
// void Reverse(PNODE Head);
// Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
// Output : |11|->|82|->|71|->|14|->|6|->|89|

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

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Reverse(PNODE Head)
{
    int iDigit = 0; 

    while(Head != 0)
    {
        printf("| ");

        while(Head->data != 0)
        {
            iDigit = Head->data % 10;
            Head->data = Head->data / 10;
            printf("%d",iDigit); 
        }

        if(Head->next == NULL)
        {
            printf(" |");
        }
        else
        {
            printf(" | -> ");
        }
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Reverse(First);

    return 0;
}