#include <stdio.h>
#include <math.h>

void addition();
void subtraction();
void multiplication();
void division();
void logarithmic();
void square_root();

int main() {
    int choice;

    while (1) {
        printf("Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithm (base 10)\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                logarithmic();
                break;
            case 6:
                square_root();
                break;
            case 7:
                printf("Exiting the calculator. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void addition() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result: %d\n", num1 + num2);
}

void subtraction() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result: %d\n", num1 - num2);
}

void multiplication() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result: %d\n", num1 * num2);
}

void division() {
    float num1, num2;
    printf("Enter two numbers (numerator and denominator): ");
    scanf("%f %f", &num1, &num2);
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        printf("Result: %.2f\n", num1 / num2);
    }
}

void logarithmic() {
    float num;
    printf("Enter a positive number: ");
    scanf("%f", &num);
    if (num <= 0) {
        printf("Error! Logarithm is defined for positive numbers only.\n");
    } else {
        printf("Result: %.2f\n", log10(num));
    }
}

void square_root() {
    double num;
    printf("Enter a non-negative number: ");
    scanf("%lf", &num);
    if (num < 0) {
        printf("Error! Square root of a negative number is not defined in real numbers.\n");
    } else {
        printf("Result: %.2lf\n", sqrt(num));
    }
}
