#include<stdio.h>
void StrLwrX(char *str)
{
    
   
    while(*str != '\0')
    {
      if (*str >='A' && *str<='Z')
      {

        *str = *str + ('a' - 'A');
       
      }
     
      
        
       str++;
    }
   
   
    
}

int main()
{
    char arr[50]={'\0'};
    
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    StrLwrX(arr);
    printf("%s\n",arr);
    


    return 0;
}