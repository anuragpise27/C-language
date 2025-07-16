    #include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    char Fname[20]={'\0'};
    int fd=0,iRet=0;
    char Buffer[1024]={'\0'};

    printf("enter the file name");
    scanf("%s",Fname);

    fd= open(Fname, O_RDONLY );
    if(fd== -1)
    {
        printf("unable to open");
        
    }
    else
    {
        printf("file is sucessful opned\n",fd);

        while ((iRet=read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            printf("%s",Buffer);
            memset(Buffer,'\0',1024);
        }
        
       

        
        close(fd);
    }

    return 0;
}