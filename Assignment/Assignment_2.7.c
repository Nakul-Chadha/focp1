//WAP to check whether score is even or odd in an array
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
    for(int i=0;i<a;i++)
    {
        if(Marks[i]%2==0)
        {
            printf("The scored marks is even\n");
        }
        else
        {
            printf("The scored marks is odd\n");
        }
    }
}