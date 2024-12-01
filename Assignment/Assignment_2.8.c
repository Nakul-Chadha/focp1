//WAP to find maximum & minimum score in the Marks array
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

    int min=Marks[0],max=Marks[0];
    for(int i=0;i<a;i++)
    {
        if(Marks[i]>=max)
        {
           max=Marks[i];
        }
        else if (Marks[i]<min)
        {
           min=Marks[i];
        }
    }
    printf("The maximum and minimum values of marks scored by students in array %d and %d respectively",max,min);
}