#include<stdio.h>



int main()
{
   char Arr[50];
   printf("enter your name");
   scanf("%[^'\n']s",Arr);
   printf("%s",Arr);
    return 0;
}