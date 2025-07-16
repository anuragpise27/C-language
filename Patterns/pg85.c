#include<stdio.h>
int Display(int iNo1,char iCh )
{
     int i;
    if(iNo1<0)
    {
        iNo1-iNo1;
    }
 
  for(i=1;i<=iNo1;i++)
  {
    printf("%c\t",iCh);
  }
  
}
int main()
{
    int iValue1=0;
    char cValue='\0';
    printf("enter frequency");
    scanf("%d",&iValue1);
    printf("enter chracter");
    scanf(" %c",&cValue);
     Display(iValue1,cValue);
    return 0;
}
//complexity=