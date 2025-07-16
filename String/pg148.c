#include<stdio.h>
#include<stdbool.h>

bool Chk(char ch)
{
    if((ch>='A') &&(ch<='Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("enter yur devision\n");
    scanf("%c",&cValue);
    bRet=Chk(cValue);
    if(bRet==true)
    {
        printf("%c is capatial");
    }
    else
    {
        printf("%c is not capital");
    }

    return 0;
}