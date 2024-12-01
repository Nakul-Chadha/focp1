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
    int cnt=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]==99)
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