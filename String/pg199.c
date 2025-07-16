#include<stdio.h>

void StrRev(char *str)
{
  char *Start=NULL;
  char *End=NULL;
  char temp='\0';
  Start=str;
  End=str;

  while (*str != '\0')
  {
   
    End++;


  }
  End--;

  if(*Start < *End)
  {
    temp = *Start;
    *Start = *End;
    *End = temp;
    Start++;
    End--;
  }
  
    
}

int main()
{
    char arr[50]={'\0'};
    
   
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
   
    StrRev(arr);
    printf("%s",arr);
   

    return 0;
}