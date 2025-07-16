#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
 int i;
 int iCount=0;
 if(Arr==NULL||iSize<=0)
 {
    return -1;
 }
 for(i=0;i<iSize;i++)
 {
    if(Arr[i]==iNo)
    {
       iCount++;
    
    }
 }
 return iCount;
 

}
int main()
{
    int *iptr=NULL;
    int iLenght=0,iValue=0,i;
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
    printf("enter the vale that u wanat to search");
    scanf("%d",&iValue);
    iRet=Frequency(iptr,iLenght,iValue);
    if(iRet==-1)
    {
        printf("there is issu in the input");
    }
    else
    {
        printf("%d appers %d times in the array",iValue,iRet);
    }

    free(iptr);
 

    return 0;
}