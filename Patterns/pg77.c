//input-4
//output-$$$$S

#include<stdio.h>
void Display(int iNo)
{
     int i;
    if(iNo<0)
    {
        iNo-iNo;
    }
 
  for(i=1;i<=iNo;i++)
  {
    printf("%d\t",i);
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