#include<stdio.h>
#include<stdbool.h>
bool ChkPalnidm(char *str)
{
  char *Start=NULL;
  char *End=NULL;
  
 
  Start=str;
  End=str;

    while (*str != '\0')
    {
    
        End++;
    }
    End--;
  
    while (Start<End)
    {
       
        break;

    }
    Start++;
    End--;
    if(Start<End)
    {
        return true;
    }
    else{
        return false;
    }
    

  
    
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