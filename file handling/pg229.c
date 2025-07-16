#include<stdio.h>
#include<unistd.h>

int main()
{
    int fd=0;
    char fname[20]={'\0'};
    printf("enter the file that you want to open");
    scanf("%s",fname);


   

    fd=open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("unaable to oepnfile");
        return -1;
    }
    
        printf("created%d\n",fd);
    
        close(fd);

    return 0;
}