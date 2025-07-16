#include<stdio.h>
#include<stdlib.h>
int  SumOdd(int Arr[],int iSize)
{
   int isum;
    printf("elements are\n");
    for(int i=0;i<iSize;i++)
    {
        if(Arr[i]%2!=0)
        {
            isum+=Arr[i];
        }
    }
    return isum;

}

int main()
{
    int iLenght=0;
    int *ptr=NULL;
    int iRet=0;

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
   
    iRet=SumEven(ptr,iLenght);
    printf("%d\n",iRet);

   
   





  //step3:free the memory
   free(ptr);

    return 0;

}