#include <stdio.h> 
int main() 
{ 
    int product[5]={1,2,3,4,5},a,b,n; 
    float sum=0; 
    float rate[5]={29.5,45.0,49.0,95.5,68.5}; 
    for(n=0;n<3;n++) 
    { 
        printf("Enter the Product number: \n Enter the quantity sold: \n ");
        scanf("%d %d",&a,&b);
        sum += rate[a-1]*b; 
    }
    printf("Total amount is: %f",sum); 
    return 0; 
}
