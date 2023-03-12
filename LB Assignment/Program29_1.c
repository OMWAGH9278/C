// Write a program and display elements which are Perfect from singly linked list

// Function Prototype :

// void DisplayPerfect(PNODE Head)
// Input Linked List : |11|->|28|->|17|->|41|->|50|->|6|->|89|
// Output : 6   28

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

void DisplayPerfect(PNODE Head)
{
    int iCnt = 1, iSum = 0;

    while(Head != NULL)
    {
        for(iCnt = 1; iCnt <= (Head->Data / 2); iCnt++)
        {
            if((Head->Data % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == Head->Data)
        {
            printf("%d\t",Head->Data);
        }

        Head = Head->Next;
        iSum = 0;
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

    DisplayPerfect(First);

    return 0;
}