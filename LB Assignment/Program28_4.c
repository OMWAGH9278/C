// Write a program which return largest element from singly linked list

// Function Prototype :

// int Maximum(PNODE Head)
// Input Linked List : |110|->|230|->|320|->|240|
// Output : 320

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

int Maximum(PNODE Head)
{
    int iMax = Head->Data;

    while(Head != NULL)
    {
        if(iMax < Head->Data)
        {
            iMax = Head->Data;
        }

        Head = Head->Next;
    }

    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Maximum(First);

    printf("Maximum number in linked list is : %d",iRet);

    return 0;
}