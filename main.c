#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int secretNumber;
    int guess = 0;
    int attempts = 0;
    int difficulty;
    int maxNumber;

     printf("=================================\n");
     printf("   Number Guessing Game 🎮\n");
     printf("=================================\n\n");

     printf("Choose Difficulty\n\n");
     printf("1. Easy (1 - 50)\n");
     printf("2. Medium (1 - 100)\n");
     printf("3. Hard (1 - 500)\n\n");

     printf("Enter your choice: ");
     scanf("%d", &difficulty);
     switch (difficulty)
{
    case 1:
        maxNumber = 50;
        break;

    case 2:
        maxNumber = 100;
        break;

    case 3:
        maxNumber = 500;
        break;

    default:
        printf("\nInvalid choice!\n");
        return 1;
}
     secretNumber = (rand() % maxNumber) + 1;

     printf("\nGuess a number between 1 and %d.\n\n",maxNumber);
;
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
