#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame();

int main() {
    int choice;

    while (1) {
        printf("\n***** Rock-Paper-Scissors *****\n");
        printf("1. Play Game\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                playGame();
                break;
            case 2:
                printf("Exiting the game. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void playGame() {
    int userChoice, computerChoice;
    const char *choices[] = {"Rock", "Paper", "Scissors"};

    printf("\nMake your choice:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please enter a valid option (1, 2, or 3).\n");
        return;
    }

    srand(time(NULL));
    computerChoice = rand() % 3 + 1;

    printf("You chose: %s\n", choices[userChoice - 1]);
    printf("Computer chose: %s\n", choices[computerChoice - 1]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||  (userChoice == 2 && computerChoice == 1) ||  (userChoice == 3 && computerChoice == 2))
    { 
        printf("You win!\n");
    }
    else
    {
        printf("You lose!\n");
    }
}
