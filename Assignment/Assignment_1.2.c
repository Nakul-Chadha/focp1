//WAP to get 2 no. from user and find their HCF(highest common factor)
#include <stdio.h>

int main()
{
    int i, num1, num2, min, hcf=1;

    printf("Enter any two numbers to find HCF: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    min = (num1<num2) ? num1 : num2;

    for(i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);

    return 0;
}