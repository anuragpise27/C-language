#include<stdio.h>
int CountWhite(char *str)
{
    int iCount=0;
    
   
    while(*str != '\0')
    {
      if (*str == ' ')
      {
        iCount++;
       
      }
     
      
        
       str++;
    }
   
     return  iCount;
    
}

int main()
{
    char arr[50]={'\0'};
    
    int iRet=0;
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    iRet=CountWhite(arr);
    printf("%d",iRet);
    


    return 0;
}