#include<stdio.h>

int main()
{
    char arr[50]={'\0'};
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    printf("%s",arr);


    return 0;
}