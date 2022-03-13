#include<stdio.h>
void main()
{
    FILE *fp,*fp1;
    int flag=0;
    char c,d,a;
    fp=fopen("file.txt","w");
    fprintf(fp,"A HERO IS SOMEONE WHO DOESN'T GIVE UP\n");
    fclose(fp);
    fp1=fopen("file1.txt","w");
    fprintf(fp1,"A HERO IS SOMEONE WHO DOESN'T GIVE UP...\n");
    fclose(fp1);
    fp=fopen("file.txt","r");
    fp1=fopen("file1.txt","r");
    while(!feof(fp))
    {
        c=getc(fp);
        d=getc(fp1);
        if(c!=d)
        {
            break;
            flag=1;
        }
    }
    a=getc(fp1);
    if(flag==0 & a==EOF)
    {
        printf("both files are equal\n");
    }
    else
    {
        printf("both files are not equal\n");
    }
}