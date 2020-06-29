#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>



int main() {
   srand(time(NULL));
   int secNum = ((rand()%100) + 1);
   int guess;
   int attemptsUsed = 0;
   int guessesAllowed = 7;
   printf("You have %d guesses to find the secret number. Good luck!", guessesAllowed);
   while(guess != secNum && attemptsUsed <= 8) {
         printf("\n\nEnter a number between 1 and 100: ");
         scanf("%d", &guess);
         if(guess > secNum) {
            printf("Too high");
            attemptsUsed++;
            printf("\n%d guesses remaining", 8-attemptsUsed);
         } else if (guess < secNum) {
            printf("Too low");
            attemptsUsed++;
            printf("\n%d guesses remaining", 8-attemptsUsed);
         }
         
     
      if(attemptsUsed >= guessesAllowed) {
         printf("\nSorry, you used all your guesses. The number was %d", secNum);
         break;
      } 
      if (guess == secNum) {
      printf("You got it!\n\n");
      break;
      }
   }

return 0;
} 
