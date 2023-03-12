// Write a program and return second maximum element from singly linked list

// Function Prototype :

// int SecMaximum(PNODE Head)
// Input Linked List : |110|->|230|->|320|->|240|
// Output : 240

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

int Maximum(PNODE Start)
{
    int iMax = 0;

    while(Start != NULL)
    {
        if(iMax < Start->Data)
        {
            iMax = Start->Data;
        }

        Start = Start->Next;
    }

    return iMax;
}

int SecMaximum(PNODE Head)
{
    int iMax = 0, iSecMax = 0;
    iMax = Maximum(Head);

    while(Head != NULL)
    {
        if(Head->Data == iMax)
        {
            Head = Head->Next;
            continue;
        }

        if(iSecMax < Head->Data)
        {
            iSecMax = Head->Data;
        }

        Head = Head->Next;
    }

    return iSecMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = SecMaximum(First);

    printf("Second maximum element from linked list is : %d",iRet);

    return 0;
}