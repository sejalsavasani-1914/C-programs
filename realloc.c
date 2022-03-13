#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,m,*p,sum=0;
    printf("how many numbers?\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("how many more numbers you want?\n");
    scanf("%d",&m);
    p=(int *)realloc(p,(n+m)*sizeof(int));
    for(int i=n;i<n+m;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<n+m;i++)
    {
        sum=sum+*(p+i);
    }
    printf("sum is : %d\n",sum);
}