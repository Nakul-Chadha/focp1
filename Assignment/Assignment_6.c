#include <stdio.h>

#define SIZE 3

// Function prototypes
void initializeBoard(char board[SIZE][SIZE]);
void displayBoard(char board[SIZE][SIZE]);
int checkWin(char board[SIZE][SIZE]);
int isDraw(char board[SIZE][SIZE]);
void makeMove(char board[SIZE][SIZE], char player);

int main() {
    char board[SIZE][SIZE];
    char currentPlayer = 'X';
    int gameStatus = 0; // 0 = ongoing, 1 = win, 2 = draw

    initializeBoard(board);

    printf("Welcome to Tic-Tac-Toe!\n");
    while (gameStatus == 0) {
        displayBoard(board);
        printf("Player %c, it's your turn.\n", currentPlayer);
        makeMove(board, currentPlayer);

        if (checkWin(board)) {
            gameStatus = 1; // Win
        } else if (isDraw(board)) {
            gameStatus = 2; // Draw
        } else {
            // Switch player
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    displayBoard(board);
    if (gameStatus == 1) {
        printf("Congratulations! Player %c wins!\n", currentPlayer);
    } else {
        printf("It's a draw! Well played.\n");
    }

    return 0;
}

// Initialize the board with numbers for positions
void initializeBoard(char board[SIZE][SIZE]) {
    int count = 1;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '0' + count; // Fill with '1' to '9'
            count++;
        }
    }
}

// Display the current board state
void displayBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

// Check if a player has won
int checkWin(char board[SIZE][SIZE]) {
    // Check rows and columns
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return 1;
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1;
    }

    return 0; // No win
}

// Check if the game is a draw
int isDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return 0; // Empty space found, not a draw
            }
        }
    }
    return 1; // No empty spaces, it's a draw
}

// Handle a player's move
void makeMove(char board[SIZE][SIZE], char player) {
    int move;
    int validMove = 0;

    while (!validMove) {
        printf("Enter your move (1-9): ");
        scanf("%d", &move);

        if (move < 1 || move > 9) {
            printf("Invalid move! Please choose a number between 1 and 9.\n");
        } else {
            int row = (move - 1) / SIZE;
            int col = (move - 1) % SIZE;

            if (board[row][col] != 'X' && board[row][col] != 'O') {
                board[row][col] = player;
                validMove = 1;
            } else {
                printf("Invalid move! That position is already taken.\n");
            }
        }
    }
}
