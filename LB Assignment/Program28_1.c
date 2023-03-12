// Write a program which search first occurence of particular element from singly linked list

// Function Prototype :

// int SearchFirstOcc(PNODE Head, int No)
// Input Linked List : |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input Element : 30
// Output : 3

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

int SearchFirstOcc(PNODE Head, int No)
{
    int iCnt = 1, iPos = 0;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        Head = Head->Next;
    }

    if(iPos == 0)
    {
        return 0;
    }
    else
    {
        return iPos;
    }
}

int main()
{
    PNODE First = NULL;
    int iValue = 0;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Enter number to find in linked list :\n");
    scanf("%d",&iValue);

    iRet = SearchFirstOcc(First, iValue);

    if(iRet == 0)
    {
        printf("No Such elements found in linked list\n");
    }
    else
    {
        printf("Element found at %d position\n",iRet);
    }

    return 0;
}