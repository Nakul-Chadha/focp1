#include<stdio.h>
void temp_swap(int a, int b)
{
    printf("Swaping by temporary varriables : ");
    printf("\nBefore swaping : no1=%d no2=%d",a,b);
    int c=a;
    a=b;
    b=c;
    printf("\nAfter swaping : no1=%d no2=%d",a,b);
}
void add_swap(int a, int b)
{
    printf("\nSwaping by adding varriables : ");
    printf("\nBefore swaping : no1=%d no2=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swaping : no1=%d no2=%d",a,b);
}
void bitwise_swap(int a, int b)
{
    printf("\nSwaping by bitwise : ");
    printf("\nBefore swaping : no1=%d no2=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAftter swaping : no1=%d no2=%d",a,b);
}
void multiply_swap(int a, int b)
{
    printf("\nSwaping by multiplication and division : ");
    printf("\nBefore swaping : no1=%d no2=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nAfter swaping : no1=%d no2=%d",a,b);
}
int main()
{
    int no1,no2;
    printf("Enter two no. to be swaped : ");
    scanf("%d",&no1);
    scanf("%d",&no2);
    printf("Two no. entered by the user are : %d and %d",no1,no2);
    temp_swap(no1,no2);
    add_swap(no1,no2);
    bitwise_swap(no1,no2);
    multiply_swap(no1,no2);
}