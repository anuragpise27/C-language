#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[],int iSize)
{
 int i;
 int iMax=0;
 if(Arr==NULL||iSize<=0)
 {
   printf("invalid input");
    return -1;
 }
 //iMax=
 for(i=0;i<iSize;i++)
 {
    if(Arr[i]>iMax)
    {
       iMax=Arr[i];
    
    }
 }
 return iMax;
 

}
int main()
{
    int *iptr=NULL;
    int iLenght=0,i;
    int iRet=0;

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
   
    iRet=Max(iptr,iLenght);
    
        printf(" max : %d",iRet);
    
    

    free(iptr);
 

    return 0;
}