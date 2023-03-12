// Write a program and display addition of digits of element which are even from singly linked list

// Function Prototype :

// void SumDigit(PNODE Head)
// Input Linked List : |110|->|230|->|20|->|240|->|640|
// Output : 2   5   2   6   10

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

void SumDigit(PNODE Head)
{
    int iDigit = 0, iSumDigit = 0;

    while(Head != NULL)
    {
        while(Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            Head->Data = Head->Data / 10;
            iSumDigit = iSumDigit + iDigit;
        }

        printf("%d\t",iSumDigit);

        iSumDigit = 0;
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    SumDigit(First);

    return 0;
}