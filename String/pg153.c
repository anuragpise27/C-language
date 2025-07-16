#include<stdio.h>
void Display(char *str)
{
    printf("your name is:%s\n",str);

}


int main()
{
   char Arr[50];
   printf("enter your name");
   scanf("%[^'\n']s",Arr);
   Display(Arr);
    return 0;
}