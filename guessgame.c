#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,n;
    char ans;
    srand(time(0));
    num=1+rand()%100;
    printf("\nwould you like to play a game? enter Y or N : ");
    scanf("%c",&ans);
    while(ans == 'Y')
    {
    printf("Can you guess my number? \n");
    while(n!=num)
    {
        printf("\nplease, type number which you guess: ");
        scanf("%d",&n);
        if(n<num)
        {
            printf("your guessed number is low");
        }
        if(n>num)
        {
            printf("your guessed number is high");
        }
    }

    printf("exellent! you guess the number!");
    printf("\nthanks for playing the game ");
    break;
    }
    

}