#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLenght=0;
    int *ptr=NULL;

    printf("enter the no. of elements");
    scanf("%d",&iLenght);
    //step1:alloacte the memory
    ptr=(int *)malloc(iLenght * sizeof(int));
    if(ptr==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("enter the elements\n");
    for(int i=0;i<iLenght;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("elements are\n");
    for(int i=0;i<iLenght;i++)
    {
        printf("%d\n",ptr[i]);
    }

    //step2:use the memory
   





  //step3:free the memory
   free(ptr);

    return 0;

}