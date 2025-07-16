#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void PushX(PPNODE first,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn -> next = NULL;

    newn->next = *first;
    *first = newn;

}
int PopX(PPNODE first)
{
    PNODE temp = NULL;
    int value = 0;

    if(*first == NULL)
    {
        printf("invalid");
    }
    else
    {
        temp = *first;
        value = temp ->data;

        *first = (*first)->next;
        free(temp);

       return value;
    }

}
void Display(PNODE first)
{
    while (first != NULL)
    {
       printf("| %d |-",first->data);
       first = first->next;
    }
    printf("\n");
    
}
int Count(PNODE first)
{
    int iCount = 0;
     while (first != NULL)
    {
       iCount++;
       first = first->next;
    }  
    return iCount; 
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;
   

    PushX(&head,50);
    PushX(&head,52);
    PushX(&head,53);
    Display(head);
   iRet =  Count(head);
   printf("\nnumber f stacks = %d\n",iRet);

  
    iRet= PopX(&head);
   printf("poped elements is = %d",iRet);
    iRet= PopX(&head);
   printf("poped elements is = %d",iRet);


    return 0;
}