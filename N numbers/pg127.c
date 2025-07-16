#include<stdio.h>
#include<stdlib.h>
int  Display(int Arr[],int iSize)
{
   int iSum=0;
    printf("elements are\n");
    for(int i=0;i<iSize;i++)
    {
        iSum += Arr[i];
    }
    return iSum;

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
   
    iRet=Display(ptr,iLenght);
    printf("%d\n",iRet);

    //step2:use the memory
   





  //step3:free the memory
   free(ptr);

    return 0;

}