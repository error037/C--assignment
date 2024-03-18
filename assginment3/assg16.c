#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 

    const int MAX_CHANCES = 10;
    const int MAGIC_NUMBER = rand() % 1000 + 1; 
    int guess, attempts = 0;

    printf("Welcome to the Guess the Magic Number Game!\n");
    printf("You have %d chances to guess the magic number.\n", MAX_CHANCES);

    do {
        printf("Enter your guess (between 1 and 1000): ");
        scanf("%d", &guess);
        attempts++;

        if (guess == MAGIC_NUMBER) {
            printf("Congratulations! You won.\n");
            break;
        } else if (guess < MAGIC_NUMBER) {
            printf("Left.\n");
        } else {
            printf("Right.\n");
        }

        if (attempts == MAX_CHANCES) {
            printf("Sorry, you have used all your chances. The magic number was: %d\n", MAGIC_NUMBER);
            break;
        }
    } while (1);

    return 0;
}

