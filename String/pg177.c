#include<stdio.h>
void Change(char *str)
{
    
   
    while(*str != '\0')
    {
      if (*str == 'a')
      {
        *str = 'A';
       
      }
     
      
        
       str++;
    }
   
   
    
}

int main()
{
    char arr[50]={'\0'};
    
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    Change(arr);
    printf("%s\n",arr);
    


    return 0;
}