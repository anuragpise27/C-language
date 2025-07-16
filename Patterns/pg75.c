//input-4
//output-* * * *

#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo-iNo;
    }
  int i;
  for(i=1;i<=iNo;i++)
  {
    printf("*\t");
  }
  printf("\n");
}
int main()
{
    int iValue=0;
    printf("enter frequency");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}