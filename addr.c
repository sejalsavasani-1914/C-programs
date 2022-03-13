#include<stdio.h>

void main()
{
    int a=10,b=20,*p,*q;
    p=&a;
    q=&b;
    printf("address of a is %p\n address of b is %p\n",p,q);
}
