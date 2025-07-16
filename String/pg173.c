#include<stdio.h>
void CountSmallCapatial(char *str)
{
    int iCap=0;
    int iSmall=0;
   
    while(*str != '\0')
    {
      if (*str >='a' && *str <= 'z')
      {
        iCap++;
       
      }
      else if(*str>='A' && *str<='Z')
      {
        iSmall++;
      }
      
        
       str++;
    }
   
     printf("%d\n",iCap);
      printf("%d",iSmall);
    
}

int main()
{
    char arr[50]={'\0'};
    
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    CountSmallCapatial(arr);
    


    return 0;
}