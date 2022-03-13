#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("hello.txt","w");
    fprintf(fp,"hello how are you?\n");
}