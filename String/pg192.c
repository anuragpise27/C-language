#include<stdio.h>
#include<stdbool.h>
//case insensitive
//corretct code


bool Chk(char *str,char ch)
{
    while (*str != 0)
    {
        if(*str == ch)
        {
        
            break;
        }
        
    }
    return (*str ==ch);
    
}

int main()
{
    char arr[50]={'\0'};
    char cValue='\0';
    int bRet=false;
   
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    printf("enter String=\n");
    scanf(" %c",&cValue);
    bRet=CharFind(arr,cValue);
    if(bRet==true)
    {
        printf("%c is praaesent in %s\n");
    }
    else
    {
        printf("%c is not present in %s");
    }
   

    return 0;
}