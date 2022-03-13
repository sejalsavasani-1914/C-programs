#include<stdio.h>

void main()
{
    int a=10,b=20,*p,*q;
    p=&a;
    q=&b;
    printf("sum of a and b is: %d\n",*p+*q);
}
