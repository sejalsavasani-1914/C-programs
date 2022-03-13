#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;
    char str[20];
    float a;
    fp=fopen("students.txt","w");
    fprintf(fp,"student details: \n");
    while(!feof(fp))
    {
    printf("student name is:\n");
    scanf("%s",str); 
    printf("student mark is:\n");
    scanf("%f",&a);
    fprintf(fp,"student name is: %s \t student mark is: %f\n",str,a);
    if(a==100)
    {
        printf("Thank You!\n");
        fprintf(fp,"End of the file....Thank You!...\n");
        break;
    }
    }
    fclose(fp);
}