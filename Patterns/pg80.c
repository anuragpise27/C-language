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
 
  for(i=iNo;i>=0;i--)
  {
    printf("%d\n",i);
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