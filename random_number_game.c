#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNumber = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number: %d\n", randomNumber);

    do
    {
        printf(" geuss a number");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {

            printf("lower number please\n");
        }
        else if (guessed < randomNumber)
        {

            printf(" higher number please\n");
        }

        else
        {
            printf(" congrats you have guessed the number!! \n");
        }

        no_of_guesses++;

    } while (guessed != randomNumber);
    printf(" you have guessed the number in %d\n guesses", no_of_guesses);

    return 0;
}
