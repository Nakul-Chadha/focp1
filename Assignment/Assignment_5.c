#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ATTEMPTS 6
#define MAX_WORD_LEN 50

void displayWord(char word[], int revealed[], int wordLen);
int isWordGuessed(int revealed[], int wordLen);

int main() {
    char word[MAX_WORD_LEN];
    int revealed[MAX_WORD_LEN] = {0};
    char guess;
    int attemptsLeft = MAX_ATTEMPTS;

    printf("Welcome to Hangman!\n");
    printf("Player 1, enter the word to guess: ");
    scanf("%s", word);
    getchar();

    int wordLen = strlen(word);
    system("clear || cls");

    printf("Player 2, start guessing the word!\n");
    while (attemptsLeft > 0) {
        displayWord(word, revealed, wordLen);

        if (isWordGuessed(revealed, wordLen)) {
            printf("\nCongratulations! You've guessed the word '%s'.\n", word);
            return 0;
        }

        printf("\nAttempts left: %d\n", attemptsLeft);
        printf("Enter your guess (a single letter): ");
        scanf(" %c", &guess);

        int found = 0;
        for (int i = 0; i < wordLen; i++) {
            if (word[i] == guess && !revealed[i]) {
                revealed[i] = 1;
                found = 1;
            }
        }

        if (!found) {
            printf("Wrong guess! '%c' is not in the word.\n", guess);
            attemptsLeft--;
        } else {
            printf("Good guess! '%c' is in the word.\n", guess);
        }
    }

    printf("\nOut of attempts! You lost. The word was '%s'.\n", word);
    return 0;
}

void displayWord(char word[], int revealed[], int wordLen) {
    printf("\nWord: ");
    for (int i = 0; i < wordLen; i++) {
        if (revealed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int isWordGuessed(int revealed[], int wordLen) {
    for (int i = 0; i < wordLen; i++) {
        if (!revealed[i]) {
            return 0;
        }
    }
    return 1;
}
