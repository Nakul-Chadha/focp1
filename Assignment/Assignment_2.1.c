//WAP to increase every student mark by 5 & then print the updated array.
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

    for(int i =0;i<a;i++)
    {
        arr[i]+=5;
    }

    printf("Students' marks after increment of 5 : \n");

    for(int i=0;i<a;i++)
    {
        printf("Student marks : %d\n",arr[i]);
    }
}