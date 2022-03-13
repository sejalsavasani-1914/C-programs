#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    printf("address is %p\n",p);
    *p=25;
    printf("%d\n",*p);
}