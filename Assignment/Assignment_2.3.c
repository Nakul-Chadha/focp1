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
    int cnt=0;
    for(int i=0;i<a;i++)
    {
        if(Marks[i]==99)
        {
            printf("Student %d has scored 99",i++);
            cnt++;
            break;
        }
    }
    if (cnt==0)
    {
        printf("No one scored 99");
    }
}