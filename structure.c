#include<stdio.h>
#include<string.h>
struct student
{
    int sid;
    char name[20];
    float cpi;
    int backlog;
}s1,s2;

void main()
{
    struct student s3,s4;    

    s1.sid=1;
    strcpy(s1.name,"abcd");
    s1.cpi=7.6;
    s1.backlog=0;

    s2.sid=2;
    strcpy(s2.name,"bcde");
    s2.cpi=7.6;
    s2.backlog=0;
    
    printf("information of student 1 is:\n student id is:%d\n student name is:%s\n student cpi is:%f\nstudent backlog is:%d\n",s1.sid,s1.name,s1.cpi,s1.backlog);
    printf("information of student 2 is:\n student id is:%d\n student name is:%s\n student cpi is:%f\nstudent backlog is:%d\n",s2.sid,s2.name,s2.cpi,s2.backlog);

    printf("enter student id\n enter student name\n enter student cpi\n enter student backlog\n");
     
    scanf("%d %s %f %d",&s3.sid,s3.name,&s3.cpi,&s3.backlog);
    printf("information of student 3 is:\n student id is:%d\n student name is:%s\n student cpi is:%f\nstudent backlog is:%d\n",s3.sid,s3.name,s3.cpi,s3.backlog);

    printf("enter student id\n enter student name\n enter student cpi\n enter student backlog\n");

    scanf("%d %s %f %d",&s4.sid,s4.name,&s4.cpi,&s4.backlog);
    printf("information of student 4 is:\n student id is:%d\n student name is:%s\n student cpi is:%f\nstudent backlog is:%d\n",s4.sid,s4.name,s4.cpi,s4.backlog);
 }