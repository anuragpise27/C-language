#include<stdio.h>
int Count(char *str)
{
    int iCount=0;
    
   
    while(*str != '\0')
    {
      if (*str == 'a')
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
    iRet=Count(arr);
    printf("%d",iRet);
    


    return 0;
}