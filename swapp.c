#include<stdio.h>

void main()
{
    int a=10,b=20,*p,*q,temp;
    p=&a;
    q=&b;
    printf("value of a=%d and value of b=%d\n",*p,*q);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("after swapping value of a=%d and value of b=%d\n",*p,*q);
}