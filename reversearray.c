#include<stdio.h>
int main()
{
    int n,a[n];
    printf("enter your array size: \n");
    scanf("%d",&n);
    printf("enter your array elements:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your array elements after reverse:");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}