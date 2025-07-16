#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    char Fname[20]={'\0'};
    int fd=0,iRet=0;
    char Buffer[50]={'\0'};

    printf("enter the file name");
    scanf("%s",Fname);

    fd= open(Fname, O_RDONLY );
    if(fd== -1)
    {
        printf("unable to open");
        
    }
    else
    {
        printf("file is sucessful opned\n");
        iRet=read(fd,Buffer,11);
        printf("%dbytes read sucessfully\n",iRet);
        printf("data from file :%s\n",Buffer);

          iRet=read(fd,Buffer,20);
        printf("%dbytes read sucessfully\n",iRet);
        printf("data from file :%s\n",Buffer);

        
        close(fd);
    }

    return 0;
}