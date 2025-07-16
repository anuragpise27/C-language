#include<stdio.h>


int main()
{
    int Arr[5];
    int i=0;
    printf("enter elements");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);
    printf("elements from the array :");
    for(i=0;i<5;i++)
    {
        printf("%d\n",Arr[i]);
    }
  
    return 0;

}