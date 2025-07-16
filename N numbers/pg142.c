#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[],int iSize)
{
 int i;
 int iMin=0;
 int iMax=0;
 if(Arr==NULL||iSize<=0)
 {
   printf("invalid input");
    return ;
 }
  iMin=Arr[0];
 
 for(i=0;i<iSize;i++)
 {
    if(Arr[i]<iMin)
    {
       iMin=Arr[i];
    
    }
    
 }
 iMax=Arr[0];
 for(i=0;i<iSize;i++)
 {
    if(Arr[i]>iMax)
    {
       iMax=Arr[i];
    
    }
    
 }
 printf("max:%d",iMax);
 printf("min:%d",iMin);
 

}
int main()
{
    int *iptr=NULL;
    int iLenght=0,i;
   

    printf("enter no. of elements:\n");
    scanf("%d",&iLenght);
    iptr=(int *)malloc(iLenght * sizeof(int ));
    if(NULL==iptr)
    {
        printf("unable to allocate");
        return -1;
    }
    printf("enter the elelments");
    for(i=0;i<iLenght;i++)
    {
        scanf("%d",&iptr[i]);
    }
   
    MaxMin(iptr,iLenght);
    
       
    
    

    free(iptr);
 

    return 0;
}

// O(2N)