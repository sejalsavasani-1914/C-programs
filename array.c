#include <stdio.h>

int main()
{
    int n,m;
    printf("enter size of row and column of 1st array: \n");
    scanf("%d %d",&n,&m);
    int a[n][m],ar[n][m],array[n][m];
    printf("enter your 1st array elements:");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("enter size of row and column of 2nd array: \n");
    scanf("%d %d",&n,&m);
    printf("enter your 2nd array elements:");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    
    printf("your 1st matrix is:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("your 2nd matrix is:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            array[i][j]=a[i][j]+ar[i][j];
        }
    }
    
    printf("sum of your matrices is:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    int min1=ar[0][0],min2=ar[0][0],min;
        for (int i=0;i<n;i++)
        {
        for (int j=0;j<m;j++)
        {
        if(a[i][j]<min1)
        {
        min1=a[i][j];
        }
        }
        }
        for (int i=0;i<n;i++)
        {
        for (int j=0;j<m;j++)
        {
        if(ar[i][j]<min2)
        {
        min2=ar[i][j];
        }
        }
        }
        min=min1<min2?min1:min2;
        int max1=a[0][0],max2=ar[0][0],max;
        for (int i=0;i<n;i++)
        {
        for (int j=0;j<m;j++)
        {
        if(a[i][j]>max1)
        {
        max1=a[i][j];
        }
        }
        }
        for (int i=0;i<n;i++)
        {
        for (int j=0;j<m;j++)
        {
        if(ar[i][j]>max2)
        {
        max2=ar[i][j];
        }
        }
        }
max=max1>max2?max1:max2;
printf("minimum value of array is: %d\n",min);
printf("maximum value of array is: %d\n",max);
    
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            array[i][j]+=a[i][j]*ar[i][j];
        }
    }
    
    printf("multiplication of your matrices is:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}

