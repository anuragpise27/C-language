#include<stdio.h>
void Display(char *str)
{
    printf("%c\n",str[0]);
    
    printf("%c\n",str[1]);
   
    printf("%c\n",str[2]);
    
    printf("%c\n",str[3]);

    printf("%c\n",str[4]);
 
}

int main()
{
    char arr[50]={'\0'};
    
    printf("enter String=\n");
    scanf("%[^'\n']s",arr);
    Display(arr);


    return 0;
}