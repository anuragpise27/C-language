#include<stdio.h>
int Display(char str[])
{
    int iCount=0;
    while(*str != '\0')
    {
      iCount++;    
    
    }
    return iCount;
    
}

int main()
{
    char arr[50]={'\0'};
    int iRet=0;
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    iRet=Display(arr);
    printf("%d",iRet);


    return 0;
}