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
    printf("%d",iRet);


    return 0;
}