#include<stdio.h>
int main()
{
    int n,a[n],even=0,odd=0;
    printf("enter your array size: \n");
    scanf("%d",&n);
    printf("enter your array elements:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total even elements are: %d\n",even);
    printf("total odd elements are: %d\n",odd);

    return 0;
}