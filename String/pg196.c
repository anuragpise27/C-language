#include<stdio.h>

void StrRev(char *str)
{
    int iCount=0;
    int i=0;
   while (*str != '\0')
   {
    iCount++;
    str++;
   }
   str--;
   for(i=iCount;i>0;i--,str--)
   {
    printf("%s",*str);
    
   }
   printf("\n");
   
    
}

int main()
{
    char arr[50]={'\0'};
    
   
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
   
    StrRev(arr);
   

    return 0;
}