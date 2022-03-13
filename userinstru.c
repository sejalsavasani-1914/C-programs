#include<stdio.h>
#include<string.h>
struct student
{
    int sid;
    char name[20];
    float cpi;
    int backlog;
}s[4];

void main()
{
    int i;
    printf("enter student details\n");
    for(i=0;i<3;i++)
    {
    printf("enter information of student %d is:\n",i+1);
    scanf("%d %s %f %d",&s[i].sid,s[i].name,&s[i].cpi,&s[i].backlog);
    }
    for(i=0;i<3;i++)
    {
    printf("information of student %d is:\n student id is:%d\n student name is:%s\n student cpi is:%f\nstudent backlog is:%d\n",i+1,s[i].sid,s[i].name,s[i].cpi,s[i].backlog);
    }
}