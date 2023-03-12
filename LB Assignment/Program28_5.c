// Write a program which return smallest element from singly linked list

// Function Prototype :

// int Minimum(PNODE Head)
// Input Linked List : |110|->|230|->|20|->|240|->|640|
// Output : 20

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

int Minimum(PNODE Head)
{
    int iMin = Head->Data;

    while(Head != NULL)
    {
        if(iMin > Head->Data)
        {
            iMin = Head->Data;
        }

        Head = Head->Next;
    }

    return iMin;
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

    iRet = Minimum(First);

    printf("Minimum number in linked list is : %d",iRet);

    return 0;
}