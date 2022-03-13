#include<stdio.h>
void main()
{
    FILE *fp,*fp3,*fp4;
    int c;
    fp=fopen("numbers.txt","w");
    fprintf(fp,"1,28,45,56,30,78,55,64\n");
    fclose(fp);
    fp=fopen("numbers.txt","r");
    fp3=fopen("even.txt","w");
    fp4=fopen("odd.txt","w");
    while(!feof(fp))
    {
        fscanf(fp,"%d,",&c);
        if(c%2==0)
        {
            fprintf(fp3,"%d,",c);
        }
        else
        {
            fprintf(fp4,"%d,",c);
        }
    }
    fclose(fp);
    fclose(fp3);
    fclose(fp4);
}