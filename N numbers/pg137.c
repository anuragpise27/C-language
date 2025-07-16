#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[],int iSize,int iNo)
{
 int i;
 bool bFlag=false;
 if(Arr==NULL||iSize<=0)
 {
    return false;
 }
 for(i=0;i<iSize;i++)
 {
    if(Arr[i]==iNo)
    {
        bFlag=true;
        break;
    }
 }
 return bFlag;
 

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
    {
        scanf("%d",&iptr[i]);
    }
    printf("enter the vale that u wanat to search");
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