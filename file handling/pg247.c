    #include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024
int main()
{
    char Fname[20]={'\0'};
    int fd=0,iRet=0,i=0,iCapcount=0;
    char Buffer[BUFFER_SIZE]={'\0'};

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

        while ((iRet=read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
           for(i=0;i<iRet;i++)
           {
            if((Buffer[i]>= 'A') && (Buffer[i]<='Z'))
            {
                iCapcount++;
            }
           }
            memset(Buffer,'\0',BUFFER_SIZE);
        }
        
       printf("%d",iCapcount);

        
        close(fd);
    }

    return 0;
}