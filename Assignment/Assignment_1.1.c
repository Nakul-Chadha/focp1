//WAP to check whether a given number is Armstrong or not.
#include<stdio.h>
#include<math.h>

void main()
{
    int number,dij;
    double ans=0;

    printf("Enter the number to check : ");
    scanf("%d",&number);

    int temp_number=number;
    printf("The entered number is : ");
    dij=printf("%d",number);
    
    for(int i =0;i<dij;i++)
    {
        ans+=pow((double)(temp_number%10),dij);
        temp_number /=10;
    }

    if((int)ans==number)
    {
        printf("\nThe entered number is a armstrong number");
    }
    else
    {
        printf("\nThe entered number is not a armstrong number");
    }
}