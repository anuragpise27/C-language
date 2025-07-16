#include<stdio.h>
int Summation( int ptr[],int iSize)
{
    int iSum=0;
    printf("elelments of array are\n");
 for(int i=0;i<iSize;i++) //isize must be written
 {
     printf("%d\n",ptr[i]);
     iSum += ptr[i];
 }
 //printf("%d",iSum);
 return iSum;
 
  
}

int main()
{
    int Arr[5];

    int i=0,iRet=0;
    printf("enter elements");
    for(i=0;i<5;i++)
     {
     scanf("%d",&Arr[i]);
    }
  iRet=Summation(Arr,5); //display (100,5)
  printf("%d",iRet);
    return 0;

}