#include <stdio.h>

int main()
{
    int n,m,positive=0,negative=0,zero=0;
    printf("enter size of row and column of array: \n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("enter your array elements:");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if(a[i][j]>0)
                positive++;
            else if(a[i][j]<0)
                negative++;
            else if(a[i][j]==0)
                zero++;
        }
    }
    printf("positive numbers are: %d\n negative numbers are: %d\n zeros are: %d\n",positive,negative,zero);

    return 0;
}