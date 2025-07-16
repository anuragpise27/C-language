#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    char Fname[20]={'\0'};
    int fd=0,iRet=0;
    char Buffer[]="india is my country";

    printf("enter the file name");
    scanf("%s",Fname);

    fd= open(Fname, O_WRONLY | O_APPEND);
    if(fd== -1)
    {
        printf("unable to open");
        
    }
    else
    {
        printf("file is sucessful opned");
        iRet=write(fd,Buffer,strlen(Buffer));
        printf("%dbytes return sucessfully",iRet);
        close(fd);
    }

    return 0;
}