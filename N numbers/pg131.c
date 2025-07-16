#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool  Search(int Arr[],int iSize)
{
   
    printf("elements are\n");
    for(int i=0;i<iSize;i++)
    {
        if(Arr[i]==11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int iLenght=0;
    int *ptr=NULL;
    bool bRet=false;

    printf("enter the no. of elements");
    scanf("%d",&iLenght);
    //step1:alloacte the memory
    ptr=(int *)malloc(iLenght * sizeof(int));
    if(ptr==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("enter the elements\n");
    for(int i=0;i<iLenght;i++)
    {
        scanf("%d",&ptr[i]);
    }

   
    bRet=Search(ptr,iLenght);
    

    if(bRet==true)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

   
   





  //step3:free the memory
   free(ptr);

    return 0;

}