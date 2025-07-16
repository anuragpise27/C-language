#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char fname[20]={'\0'};
    printf("enter the file that you want to open");
    scanf("%s",fname);


    //O_RDONLY
    //O_WR
    //O_RD

    fd=open(fname,O_R);
    if(fd==-1)
    {
        printf("unaable to oepnfile");
        return -1;
    }
    
        printf("created%d\n",fd);
    

    return 0;
}