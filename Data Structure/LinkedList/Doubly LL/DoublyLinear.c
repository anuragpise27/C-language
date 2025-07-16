#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
    printf("NULL->");
    while(first != NULL)
    {
        printf("|| %d ||->",first->data);
        first = first->next;
    }
    printf("NULL\n");

}

int Count(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn ->next = NULL;
    newn ->prev = NULL;

   

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        (*first)->prev = newn;
        *first = newn;
    }


}
void InsertLast(PPNODE first,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data= no;
    newn -> next =NULL;
    newn ->prev = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        while(temp ->next != NULL)
        {
            temp = temp->next;
        }
        temp ->next = newn;
        newn ->prev =temp;


    }

}
void InsertAtPos(PPNODE first,int no,int pos)
{
     PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount = 0;
    iCount = Count(*first);

    if(pos<1 || pos>iCount+1)
    {
        printf("invalid");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(first,no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(first,no);
    }
    else
    {
         newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = no;
        newn ->next = NULL;
        newn ->prev = NULL;

        temp = *first;
        for(int i=1 ;i<iCount-1;i++)
        {
            temp = temp->next;
        }
       
       newn -> next = temp -> next;
       newn -> next->prev = newn;

       temp->next = newn;
       newn -> prev = temp;


    }
}
void DeleteFirst(PPNODE first)
{
    
    PNODE temp = NULL;
    if((*first) == NULL)
    {
        return;
    }
    else if((*first) ->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
       
        *first = (*first)->next;
        free((*first)->prev);
        (*first)->prev = NULL;
        
    }


}
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;   
    if((*first) == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        while(temp->next->next != NULL)
        {
            temp = temp-> next;
        }
        free(temp->next);
        temp -> next = NULL;

    }
}
void DeleteAtPos(PPNODE first,int pos)
{

     PNODE temp = NULL;
     PNODE target = NULL;
    int iCount = 0;
    iCount = Count(*first);

    if((pos<1) || pos>iCount)
    {
        printf("invalid");
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
       
        temp = *first;
        for(int i=1 ;i<iCount-1;i++)
        {
            temp = temp->next;
        }
       
        target = temp-> next;
        temp->next = target -> next;
        target ->next-> prev = temp;
        free(target);
      

    }


}


int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head,11);
    InsertFirst(&head,12);
    InsertFirst(&head,13);
    InsertFirst(&head,14);

   

   

    DeleteAtPos(&head,2);
    Display(head);
    iRet=Count(head);
    printf("%d\n",iRet);



    return 0;
}