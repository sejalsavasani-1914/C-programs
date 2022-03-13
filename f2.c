#include<stdio.h>
void main()
{
    FILE *fp;
    char str[50];
    fp=fopen("hello.txt","r");
    fscanf(fp, "%s" ,str);
    printf("file content is: %s\n",str);
    fclose(fp);
}