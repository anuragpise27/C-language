#include<stdio.h>
#include<string.h>


int main()
{
    char arr[50]={'\0'};
    int iRet=0;
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    iRet=strlen(arr);
    printf("%d",iRet);


    return 0;
}