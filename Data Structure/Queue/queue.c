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

void Enqueue(PPNODE first,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn -> next = NULL;
    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

}
int Dequeue(PPNODE first)
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
        value = temp->data;

        *first = (*first)->next;
        free(temp);

        return value;
    }


}
void Display(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    while(temp != NULL)
    {
        printf("| %d |-",temp->data);
        temp=temp->next;
    }
    printf("\n");

}
int Count(PNODE first)
{
     PNODE temp = NULL;
     int iCount= 0;
    temp = first;
    while(temp != NULL)
    {
       iCount++;
        temp=temp->next;
    }
    printf("\n");
    return iCount;

}

int main()
{
    PNODE head =NULL;
    int iRet = 0;
    Enqueue(&head,11);
    Enqueue(&head,12);
    Enqueue(&head,13);

    Display(head);
    iRet = Count(head);
    printf("number of elements is:\n %d\n",iRet);

    iRet = Dequeue(&head);
    printf("\ndequed element is : %d\n",iRet);
    Display(head);
    iRet = Count(head);
    printf("number of elements is:\n %d\n",iRet);



    return 0;
}