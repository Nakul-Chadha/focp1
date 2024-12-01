//WAP to find sum of all scores in Marks array.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no. of students' marks : ");
    scanf("%d",&a);
    
    int Marks[a];
    for(int i=0;i<a;i++)
    {
        int b;
        printf("Enter marks :");
        scanf("%d",&b);
        Marks[i]=b;
    }

    for(int i=0;i<a;i++)
    {
        printf("Student marks : %d\n",Marks[i]);
    }
    int sum=0;
    for(int i=0;i<a;i++)
    {
        sum+=Marks[i];
    }

    printf("Total sum of marks scored by students in array = %d",sum);
}