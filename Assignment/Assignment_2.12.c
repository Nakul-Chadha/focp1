/* WAP to implement delete-Front, any position in between & end in an array. Print
the array before delete & after delete */
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
        printf("\nEnter marks :");
        scanf("%d",&b);
        Marks[i]=b;
    }
    
    printf("Array before deletion : \n");

    for(int i=0;i<a;i++)
    {
        printf("Student marks : %d\n",Marks[i]);
    }

    int pos;
    printf("Enter position to be deleted [0=front,%d=end,numeric=any value in between] : ",a);
    scanf("%d",&pos);
    
    int deleted_Marks[a-1]; 
    int i=0;
    while(i<a-1)
    {
        if(i!=pos)
        {
            deleted_Marks[i]=Marks[i];
        }
        else if(i==pos)
        {
            break;
        }
        i++;
    }
    while(i<a-1)
    {
        deleted_Marks[i]=Marks[i+1];
        i++;
    }
    printf("Array after deletion : \n");
    for(int i=0;i<a-1;i++)
    {
        printf("Student marks : %d\n",deleted_Marks[i]);
    }
}