#include<stdio.h>
int Display(int iRow,int iCol)
{
   int j=0,i=0;
   for(i=1;i<=iRow;i++)
   {
    for(j=1;j<=iCol;j++)
    {
        printf("@\t");
    }
    printf("\n");
   }
   
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("enter no. of rows");
    scanf("%d",&iValue1);
    printf("enter no. of columns");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}
//complexity=