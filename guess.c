#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random, guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("\t\tWelcome to the Guessing Game\n");
    random = rand() % 100 + 1;
 do{
 printf("Please enter your guess between 1 to 100: ");
 scanf("%d",&guess);
 no_of_guess++;

 if (guess<random)
 {
    printf("Guess a larger number\n ");
 }
 else if (guess>random)
 { 
    printf("Guess a smaller number\n");
 }
 else{
    printf("Congratulations!\n You have guessed the right number in %d attempts.",no_of_guess);
 }
 } while(guess!=random);
 printf("\n Thank you for playing \n");
 printf(" \t\tDeveloped by Adesh Gurung.\n Email:adeshawm11@gmail.com");
}