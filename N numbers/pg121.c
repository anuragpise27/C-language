#include<stdio.h>
void Display( int ptr[],int iSize)
{
    printf("elelments of array are\n");
  printf("%d\n",ptr[0]);

  printf("%d\n",ptr[1]);

  printf("%d\n",ptr[2]);
 
  printf("%d\n",ptr[3]);
  
  printf("%d\n",ptr[4]);
  
}

int main()
{
    int Arr[5];
    int i=0;
    printf("enter elements");
  for(i=0;i<5;i++)
  {
     scanf("%d",&Arr[i]);
  }
  Display(Arr,5);  //display (100,5)
  
    return 0;

}