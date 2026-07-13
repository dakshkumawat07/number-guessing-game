#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int secretNumber = (rand() % 100) + 1;
    int guess = 0;
    int attempts = 0;

    printf("=================================\n");
    printf("   Number Guessing Game 🎮\n");
    printf("=================================\n");
    printf("Guess a number between 1 and 100.\n\n");

    while (guess != secretNumber)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secretNumber)
        {
            printf("📉 Too low! Try again.\n\n");
        }
        else if (guess > secretNumber)
        {
            printf("📈 Too high! Try again.\n\n");
        }
        else
        {
            printf("\n🎉 Congratulations!\n");
            printf("You guessed the number in %d attempt(s).\n", attempts);
        }
    }

    return 0;
}
