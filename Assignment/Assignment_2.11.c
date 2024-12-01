/* WAP to implement Insert -Front, any position in between & end in an array. Print
the array before insert & after insert */
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
    
    printf("Array before insertion : \n");

    for(int i=0;i<a;i++)
    {
        printf("Student marks : %d\n",Marks[i]);
    }
    int pos;
    int ele;
    printf("Enter the element to insert : ");
    scanf("%d",&ele);
    printf("Enter position to insert in [0=front,%d=end,numeric=any value in between] : ",a);
    scanf("%d",&pos);
    
    int inserted_Marks[a+1]; 
    int i=0;
    while(i<a+1)
    {
        if(i!=pos)
        {
            inserted_Marks[i]=Marks[i];
        }
        else if(i==pos)
        {
            inserted_Marks[i]=ele;
            i++;
            break;
        }
        printf("\n%d %d",inserted_Marks[i],pos);
        i++;
    }
    while(i<a+1)
    {
        inserted_Marks[i]=Marks[i-1];
        i++;
    }
    printf("Array after insertion : \n");
    for(int i=0;i<a+1;i++)
    {
        printf("Student marks : %d\n",inserted_Marks[i]);
    }
}