  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do
    {
      printf("enter the guessed number: \n");
      scanf("%d", &guessed);
      if (guessed > randomNumber)
      {
        printf("try lower number !!!\n");
      }
      else{
        printf("try higher number !!!\n");
      }
      no_of_guesses ++;
        
    } while (guessed != randomNumber);
    printf("..............$congraluations$ ..............\nyou guessed the number in %d guesses", no_of_guesses);


    

    return 0;
}
