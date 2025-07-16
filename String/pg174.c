#include<stdio.h>
void CountSmallCapatialDigits(char *str)
{
    int iCap=0;
    int iSmall=0;
    int idigit=0;
   
    while(*str != '\0')
    {
      if (*str >='a' && *str <= 'z')
      {
        iCap++;
       
      }
      else if(*str >='A' && *str <= 'Z')
      {
        iSmall++;
      }
      else if(*str >='0' && *str <= '9')
      {
        idigit++;
      }
      
        
       str++;
    }
   
     printf("%d\n",iCap);
      printf("%d\n",iSmall);
      printf("%d",idigit);
    
}

int main()
{
    char arr[50]={'\0'};
    
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    CountSmallCapatialDigits(arr);
    


    return 0;
}