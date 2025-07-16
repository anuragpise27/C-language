#include<stdio.h>
void Display( int ptr[],int iSize)
{
    printf("elelments of array are\n");
 for(int i=0;i<iSize;i++) //isize must be written
 {
     printf("%d\n",ptr[i]);
 }
 
  
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