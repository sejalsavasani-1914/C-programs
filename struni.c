#include<stdio.h>
#include<string.h>

union book
{
    char title[20];
    char author[20];
    float price;
    int pages;
}u1;

void main()
{
    strcpy(u1.title,"aayno");
    printf("book title is: %s\n",u1.title);
    strcpy(u1.author,"ashwini bhatt");
    printf("book author is: %s\n",u1.author);
    printf("book title is: %s\n",u1.title);
    printf("book pages is: %d\n",u1.pages);
    u1.price=145.00;
    printf("book price is: %f\n",u1.price);
    printf("book pages is: %d\n",u1.pages);
    u1.pages=169;
    printf("book pages is: %d\n",u1.pages);
    printf("book price is: %f\n",u1.price);
    printf("book author is: %s\n",u1.author);
    printf("book title is: %s\n",u1.title);
}

