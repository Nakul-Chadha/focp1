//WAP to print grade of students as per their marks given in an array. 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no. of students' marks : ");
    scanf("%d",&a);
    
    int arr[a];
    for(int i=0;i<a;i++)
    {
        int b;
        printf("Enter marks :");
        scanf("%d",&b);
        arr[i]=b;
    }

    for(int i=0;i<a;i++)
    {
        printf("Student marks : %d\n",arr[i]);
    }

    for(int i=0;i<a;i++)
    {
        if(arr[i]>=75)
        {
            printf("\nGrade A");
        }

        else if(arr[i]<75 && arr[i]>=60)
        {
            printf("\nGrade B");
        }

        else if(arr[i]<60 && arr[i]>=40)
        {
            printf("\nGrade C");
        }

        else if(arr[i]<40)
        {
            printf("\nGrade D");
        }
    }
}