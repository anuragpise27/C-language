#include<stdio.h>
#include<stdbool.h>
bool ChkPalnidm(char *str)
{
  char *Start=NULL;
  char *End=NULL;
  
  bool bFlag=true;
  Start=str;
  End=str;

    while (*str != '\0')
    {
    
        End++;
    }
    End--;
  
    while (Start<End)
    {
        bFlag=false;
        break;

    }
    Start++;
    End--;
    

  
    
}

int main()
{
    char arr[50]={'\0'};
    bool bRet=false;
    
   
    
    printf("enter String=\n");
    scanf(" %[^'\n']s",arr);
   
    bRet=ChkPalnidm(arr);
    if(bRet==true)
    {
        printf("palnidrome");
    }
    else
    {
        printf("not");
    }
   

    return 0;
}