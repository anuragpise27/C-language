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

void Display(PNODE first,PNODE last)
{
    PNODE temp = NULL;
    printf("elements of linkedlist are..\n");

     temp = first;

    if(first == NULL && last == NULL)
    {
        printf("invalid");
        return;
    }
     printf("<=>");
    do
    {
        
        printf("| %d |<=>",temp->data);
        temp = temp->next;
    } while (temp != first);
    
    
}
int Count(PNODE first,PNODE last)
{
    PNODE temp = NULL;
    int iCount = 0;
    temp = first;
    
   
    do
    {
         iCount++;
         temp = temp->next;
    } while (temp != first);

    return iCount;
  
}
void InsertFirst(PPNODE first,PPNODE last,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
       *first = newn;
       *last = newn;
    }
    else
    {
        newn ->next = *first;
        (*first) ->prev = newn;

        *first = newn;
    }    
    (*first)->prev = *last;
    (*last)->next = *first;

}
void InsertLast(PPNODE first,PPNODE last,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev= NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
       (*last)->next = newn;
       newn->prev = *last;
        *last = newn;
    }
    (*last)->next = *first;
    (*first)->prev = *last;

}
void InsertAtPos(PPNODE first,PPNODE last,int no,int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount = 0;
    iCount = Count(*first,*last);

    if(pos < 1 || pos > iCount+1)
    {
        printf("invalid");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(first,last,no);
    }
    else if (pos == iCount+1)
    {
        InsertLast(first,last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn-> data = no;
        newn -> next = NULL;
        newn ->prev = NULL;

        temp = *first;
        for(int i=1; i< pos -1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;

        temp ->next = newn;
        newn->prev = temp;
    }
    

    
}
void DeleteFirst(PPNODE first,PPNODE last)
{
   
     if(*first == NULL)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*first)->prev);
    }
     (*last)->next = *first ;
    (*first)->prev  = *last ;

}
void DeleteLast(PPNODE first,PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        printf("invalid");
        return;
    }
    if(*first == NULL)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *last = (*last)->prev;
        free((*last)->next);
    }
    (*last)->next = *first;
    (*first)->prev = *last;

}
void DeleteAtPos(PPNODE first,PPNODE last,int pos)
{
   PNODE target = NULL;
    PNODE temp = NULL;
    int iCount = 0;
    iCount = Count(*first,*last);

    if(pos < 1 || pos > iCount)
    {
        printf("invalid");
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(first,last);
    }
    else if (pos == iCount)
    {
        DeleteLast(first,last);
    }
    else
    {
       

        temp = *first;
        for(int i=1; i< pos -1; i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp ->next = target->next;
        target->next->prev = temp;

        free(target);
       
    }

}



int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet= 0;

    InsertFirst(&head,&tail,14);
    InsertFirst(&head,&tail,13);
    InsertFirst(&head,&tail,12);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,10);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("\n\ncount of node : %d\n",iRet);

    DeleteAtPos(&head,&tail,3);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("\n\ncount of node : %d\n",iRet);

   

    



    return 0;
}