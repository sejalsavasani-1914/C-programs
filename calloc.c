#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,*p,sum=0;
    printf("how many numbers?\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("sum is : %d\n",sum);
}