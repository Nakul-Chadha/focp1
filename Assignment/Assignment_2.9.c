//WAP to find a peak element which is not smaller than its neighbors
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
    int gpeak=Marks[0];
    
    for (int i=0;i<a;i++)
    {
        if(Marks[i]>=gpeak)
        {
            gpeak=Marks[i];
        }
    }
    printf("Global peak : %d",gpeak);
}