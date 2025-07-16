#include<stdio.h>
int CountCpatital(char *str)
{
    int iCount=0;
   
    while(*str != '\0')
    {
      if (*str >='A' && *str <= 'Z')
      {
        iCount++;
      }
        
       str++;
    }
   
    return iCount;
    
}

int main()
{
    char arr[50]={'\0'};
    int iRet=0;
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    iRet=CountCpatital(arr);
    printf("%d",iRet);


    return 0;
}