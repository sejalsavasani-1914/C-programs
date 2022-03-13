#include<stdio.h>
void main()
{
    FILE *fp,*fp1;
    char c;
    fp1=fopen("hello1.txt","w");
    fp=fopen("hello.txt","r");
    while(!feof(fp))
    {
        c=getc(fp);
        printf("%c",c);
        putc(c,fp1);
    }
    fprintf(fp1,"this is new file\n");
    fclose(fp);
    fclose(fp1);
}