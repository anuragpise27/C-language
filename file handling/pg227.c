#include<stdio.h>
#include<unistd.h>

int main()
{
    int fd=0;
    char fname[20]={'\0'};
    printf("enter the name of file");
    scanf("%s",fname);

    fd=creat(fname,0777);
    if(fd==-1)
    {
        printf("unaable to crea file");
        return -1;
    }
    
        printf("created%d\n",fd);
    

    return 0;
}