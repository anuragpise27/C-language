#include<stdio.h>
void StrToglX(char *str)
{
    
   
    while(*str != '\0')
    {
      if (*str >='a' && *str<='z')
      {

        *str = *str - 32;
       
      }
      else if (*str >='A' && *str<='Z')
      {

        *str = *str + 32;
       
      }
     
      
        
       str++;
    }
   
   
    
}

int main()
{
    char arr[50]={'\0'};
    
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    StrToglX(arr);
    printf("%s\n",arr);
    


    return 0;
}