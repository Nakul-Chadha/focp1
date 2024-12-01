//WAP to count prime numbers in an array
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

    printf("Prime no. in array are : ");

    for(int i=0;i<a;i++)
    {
        int cnt=0;
        for (int j=2;j<=Marks[i]/2;j++)
        {
            if(Marks[i]%j==0)
            cnt++;
        }
        if(cnt==0)
        {
            printf("\n%d",Marks[i]);
        }
    }
}