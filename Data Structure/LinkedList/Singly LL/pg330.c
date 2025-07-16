#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;



void InsertFirst(PPNODE first,int no)
{
  PNODE newn = NULL;
  newn=(PNODE)malloc(sizeof(NODE));

  newn -> data = no;
  newn -> next = NULL;
  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    newn -> next = *first;
    *first = newn;
  }


}
void InsertLast(PPNODE first,int no)
{
    PNODE newn = NULL;
    PNODE temp =NULL;
  newn=(PNODE)malloc(sizeof(NODE));

  newn -> data = no;
  newn -> next = NULL;
  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    temp = *first;
   while (temp -> next != NULL)
   {
        temp =temp -> next;
   }
   temp -> next = newn;
   }

}
void Display(PNODE  first)
{
    while (first != NULL)
    {
      printf("| %d |->",first->data);
      first = first -> next;

    }
    printf("null\n");
}
int Count(PNODE first)
{
    int iCount=0;
     while (first != NULL)
    {
      iCount++;
      first = first -> next;

    }
    return iCount;
}
void DeleteFirst(PPNODE first)
{
    PNODE temp =NULL;
    if(*first == NULL)          //emoty LL
    {
        return;
    }
    else if((*first) -> next == NULL)     // single node
    {
        free(*first);
        *first = NULL;
    }
    else                              //more than one node
    {
         temp = *first;
         *first = (*first) -> next ;

         free(temp);
    }
}
void DeleteLast(PPNODE first)
{
    PNODE temp =NULL;
    if(*first == NULL)          //emoty LL
    {
        return;
    }
    else if((*first) -> next == NULL)     // single node
    {
        free(*first);
        *first = NULL;
    }
    else                              //more than one node
    {
        temp = *first;
       while(temp -> next -> next != NULL)
       {
         temp = temp -> next;
       }
       free(temp -> next);
       temp -> next = NULL;
    }
}
void InsertAtPos(PPNODE first,int no,int Pos)
{
    int iCount=0,i=0;
    PNODE temp = NULL;
    PNODE newn = NULL;
    iCount =Count(*first);

    if((Pos < 1) || (Pos > iCount+1))   //filter
    {
        printf("invalid position");
        return;
    }

    if(Pos == 1)
    {
        InsertFirst(first,no);
    }
    else if(Pos == iCount+1)
    {
        InsertLast(first,no);
    }
    else
    {
        temp = *first;
        for(i=1;i<Pos-2;i++)
        {
            temp = temp -> next;
        }
        newn =(PNODE)malloc(sizeof(NODE));
        newn ->data = no;
        newn ->next = NULL;

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}
void DeleteAtPos(PPNODE first,int Pos)
{
    int iCount=0,i=0;
    PNODE temp = NULL;
    PNODE target = NULL;

    iCount =Count(*first);

    if((Pos < 1) || (Pos > iCount))   //filter
    {
        printf("invalid position");
        return;
    }

    if(Pos == 1)
    {
        DeleteFirst(first);
    }
    else if(Pos == iCount+1)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;
        for(i=1;i<Pos-2;i++)
        {
            temp = temp -> next;
        }
       
       target = temp -> next;
       temp -> next = target -> next;  //temp ->next = temp ->next;
       free(target);
    }
}

int main()
{
    PNODE head = NULL;
    int iRet=0;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

   

    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);

    Display(head);
    iRet = Count(head);
    printf("%d\n",iRet);

    InsertAtPos(&head,105,5);

    Display(head);
    iRet = Count(head);
    printf("%d\n",iRet);

    DeleteAtPos(&head,5);
    Display(head);
    iRet = Count(head);
    printf("%d\n",iRet);





    return 0;
}