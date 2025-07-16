#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[],int iSize,int iNo)
{
 int i;
 if(Arr==NULL||iSize<=0)
 {
    return false;
 }
 for(i=0;i<iSize;i++)
 {
    if(Arr[i]==iNo)
    {
        break;
    }
 }
 if(i==iSize)
 {
    return false;
 }
 else
 {
    return true;
 }

}
int main()
{
    int *iptr=NULL;
    int iLenght=0,iValue=0,i;
    bool bRet=false;

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
    printf("enter the number %d:",i++);
    {
        scanf("%d",&iptr[i]);
    }
    printf("\nenter the vale that u wanat to search");
    scanf("%d",&iValue);
    bRet=Search(iptr,iLenght,iValue);
    if(bRet==true)
    {
        printf("%d is present in array");
    }
    else
    {
        printf("%d is not in array");
    }

    free(iptr);
 

    return 0;
}