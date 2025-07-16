#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if((ch>='a') &&(ch<='z'))
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
    bRet=ChkSmall(cValue);
    if(bRet==true)
    {
        printf("%c is small");
    }
    else
    {
        printf("%c is not small");
    }

    return 0;
}