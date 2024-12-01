//WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per user’s choice
#include <stdio.h>

int convert(int n) {

    int dec = 0;
    int i = 0, rem;

    while (n != 0) {

        rem = n % 10;

        dec += rem << i; 

        n /= 10;

        ++i;
    }

    return dec;
}

int main() {

    int n;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    printf("%d in binary = %d in decimal", n, convert(n));

    return 0;
}
