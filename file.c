#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("hello.txt","r");
    while(!feof(fp))
    {
        c=getc(fp);
        printf("%c",c);
    }
    fclose(fp);
}