//WAP to print Pascal’s Triangle
#include <stdio.h>
void Pascal(int n)
{
    for (int l= 1; l<= n; l++) {
        for (int s= 1; s<= n - l; s++)
            printf("  ");

        int coeffi = 1;
        for (int i = 1; i <= l; i++) {

            printf("%4d", coeffi);
            coeffi = coeffi * (l - i) / i;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    Pascal(n);
    return 0;
}