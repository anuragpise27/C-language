#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20]={'\0'};
    int fd=0;
    printf("enter the file name");
    scanf("%s",Fname);

    fd= open(Fname, O_RDWR);
    if(fd== -1)
    {
        printf("unable to open");
        
    }
    else
    {
        printf("file is sucessful opned");
    }



    return 0;
}