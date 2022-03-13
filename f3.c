#include<stdio.h>
void main()
{
    FILE *fp;
    char str[50];
    fp=fopen("hello.txt","a");
    fprintf(fp,"are you there?\n");
    fscanf(fp, "%s" ,str);
    printf("file content is: %s\n",str);
    fprintf(fp,"come into my office\n");
    fclose(fp);
}