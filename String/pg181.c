#include<stdio.h>
void StrUprX(char *str)
{
    
   
    while(*str != '\0')
    {
      if (*str >='a' && *str<='z')
      {

        *str = *str - 32;
       
      }
     
      
        
       str++;
    }
   
   
    
}

int main()
{
    char arr[50]={'\0'};
    
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    StrUprX(arr);
    printf("%s\n",arr);
    


    return 0;
}