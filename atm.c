#include<stdio.h>
#include<stdlib.h>

int login();
void checkbalance(int);
void cashwithdraw(int);
void cashdeposite(int);

int id_a[5]={1234,2345,3456,4567,5678};
int pin[5]={1111,2222,3333,4444,5555};
int balance[5]={3000,4000,2000,5000,3000};

void main()
{
    int ch;
    int a=login();    
    if(a>0)
    {
    printf("you , logged in sucessfully\n");    
    do
    {
        printf("What you want to do?\n Enter 1 for check balance\n Enter 2 for withdraw cash\n Enter 3 for deposite cash\n Enter 4 for quit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            checkbalance(a);
            break;

            case 2:
            cashwithdraw(a);
            break;

            case 3:
            cashdeposite(a);
            break;

            case 4:
            printf("Thank you for visiting our bank ATM.\n");
            break;

            default:
            printf("enter valid input\n");
        }        
    }while (ch!=4);
    }
}
int login()
{
    int i,j,id,p,chance=3;
    printf("Welcome to our bank ATM service\n");
    printf("Enter your account id: \n");
    scanf("%d",&id);
    for(j=0;j<5;j++)
    {
        if(id_a[j]==id)
        i=j;
    }
    do
    {    
    printf("Enter your pin number: \n");
    scanf("%d",&p);
    if(p!=pin[i])
    {
    printf("INCORRECT PIN.Cannot login\n");
        chance--;
    debug(55);
    }
    }while(p!=pin[i] && chance>0);
    if(chance==0)
    {
        printf("your card is blocked\n");
        exit(1);
    }
    return i;
}

void checkbalance(int x)
{
    printf("Balance of user %d is: %d",x,balance[x]);
}

void cashwithdraw(int x)
{
    int amount;
    printf("enter amount : \n");
    scanf("%d",&amount);
    if(balance[x]>=amount)
    {
        balance[x]-=amount;
    }
    else
    {
        printf("your account does not have that much amount");
    }
}

void cashdeposite(int x)
{
    int amount;
    printf("enter amount : \n");
    scanf("%d",&amount);
    balance[x]+=amount;
}
