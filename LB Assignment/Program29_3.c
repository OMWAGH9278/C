// Write a program and return addition of elements which are even from singly linked list

// Function Prototype :

// int AdditionEven(PNODE Head)
// Input Linked List : |11|->|20|->|32|->|41|
// Output : 52

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

int AdditionEven(PNODE Head)
{
    int iEvenSum = 0;

    while(Head != NULL)
    {
        if((Head->Data % 2) == 0)
        {
            iEvenSum = iEvenSum + Head->Data;
        }

        Head = Head->Next;
    }

    return iEvenSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    iRet = AdditionEven(First);

    printf("Addition of even elements from linked list is : %d",iRet);

    return 0;
}