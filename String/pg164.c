#include<stdio.h>
void Display(char str[])
{
    
    for(;*str != '\0';str++)
    {
        printf("%c\n",*str);
    
    }
    
}

int main()
{
    char arr[50]={'\0'};
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    Display(arr);


    return 0;
}