#include<stdio.h>


int main()
{
    int Arr[5];
    int i=0;
    printf("enter elements");
  for(i=0;i<5;i++)
  {
     scanf("%d",&Arr[i]);
  }
   
    printf("elements from the array :");
    for(i=0;i<5;i++)
    {
        printf("%d\n",Arr[i]);
    }
  
    return 0;

}