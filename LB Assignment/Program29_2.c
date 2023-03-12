// Write a program and display elements which are Prime from singly linked list

// Function Prototype :

// void DisplayPrime(PNODE Head)
// Input Linked List : |11|->|20|->|17|->|41|->|22|->|6|->|89|
// Output : 11  17  41  89

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;    
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;    
    }
}

void DisplayPrime(PNODE Head)
{
    int iCnt = 0, iFactCnt = 0;

    while(Head != NULL)
    {
        for(iCnt = 2; iCnt <= (Head->Data / 2); iCnt++)
        {
            if((Head->Data % iCnt) == 0)
            {
                iFactCnt++;
            }
        }

        if(iFactCnt == 0)
        {
            printf("%d\t",Head->Data);
        }

        Head = Head->Next;
        iFactCnt = 0;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayPrime(First);

    return 0;
}