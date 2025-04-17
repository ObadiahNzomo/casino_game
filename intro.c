#include <stdio.h>
#include <stdlib.h>

int rules();

int round1();

int main(){

    rules();

    printf("\n\n");

    round1();

    return 0;
}

int round1(){

    char name[50];
    printf("Enter your name : ");
    scanf("%s",name);

    printf("\n\n");

    int deposit;
    printf("Enter the amount of money to deposit for the game : ");
    scanf("%d",&deposit);

    printf("\n\n");

    printf("Your current balance is %d",deposit);
    printf("\n\n");

    int bet1;
    printf("%s,Enter the money to bet : $", name);
    scanf("%d",$bet1);

    printf("\n\n");


   if(bet1>deposit)
  { 
     printf("Money Exceeds,\n");
     printf("Enter Again : $ ");
     scanf("%d" , &bet1);
  }

  printf("\n\n");

  int computer1;
  computer1 = rand() % 10;

 int guess1;
 printf("Guess a number from 1 to 10: ");
scanf("%d" , &guess1);

printf("\n\n");

if(guess>10)
{    printf("Number Exceeds, \n");
     printf("Enter Again : ");
     scanf("%d", &guess1);

printf("\n\n");



  




    


