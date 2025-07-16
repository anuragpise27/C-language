#include<stdio.h>
//case insensitive
//corretct code


int CharFind(char *str,char ch)
{
    int iCount=0;
   
    while(*str != '\0')
    {
      if(ch>='A' && ch<='Z')
      {
          if(*str == ch || *str == ch +32)
          {
            iCount++;
          }
      }
      else if(ch>='a' && ch<='z')
      {
          if(*str == ch || *str == ch -32)
          {
            iCount++;
          }
      }
      else{
        if(*str == ch || *str == ch+0)
        {
            iCount++;
        }
      }
     
   str++;  
   }
   
   return iCount;
    
}

int main()
{
    char arr[50]={'\0'};
    char cValue='\0';
    int iRet=0;
   
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    printf("enter String=\n");
    scanf(" %c",&cValue);
    iRet=CharFind(arr,cValue);
    printf("%d",iRet);
   

    return 0;
}