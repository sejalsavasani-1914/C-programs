#include<stdio.h>
int main()
{
    int i,n,a[n],b[n];
    printf("enter your array size: \n");
    scanf("%d",&n);
    printf("enter your array elements:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("elements of copied array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("value of array b[%d] = %d\n",i,b[i]);
    }
    return 0;

}