#include<stdio.h>
#include<unistd.h>

int main()
{
    int fd=0;

    fd=creat("demo.txt",0777);

    return 0;
}