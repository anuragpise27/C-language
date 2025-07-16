#include<stdio.h>
void Display(int iNo)
{
     int i;
    if(iNo<0)
    {
        iNo-iNo;
    }
 
  for(i=-iNo;i<=0;i++)
  {
    printf("%d\t",i);
  }
  for(i=i;i<=iNo;i++)
  {
    printf("%d\t",i);
  }
}
int main()
{
    int iValue=0;
    printf("enter frequency");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
//complexity=2(N)