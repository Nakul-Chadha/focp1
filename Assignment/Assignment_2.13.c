//Given an array, the task is to cyclically rotate the array clockwise by one time
#include<stdio.h>

int main()
{
    int a;
    printf("Enter the no. elements in array : ");
    scanf("%d",&a);
    
    int arr[a];
    for(int i=0;i<a;i++)
    {
        int b;
        printf("\nEnter element:");
        scanf("%d",&b);
        arr[i]=b;
    }
    
    printf("Array before cyclically rotated : \n");

    for(int i=0;i<a;i++)
    {
        printf(" %d\n",arr[i]);
    }
    
    int crarr[a];
    for(int i=0;i<a;i++)
    {
        if(i==0)
        {
            crarr[i]=arr[a-1];
        }
        else
        {
            crarr[i]=arr[i-1];
        }
    }

    printf("Array after cyclically rotated : \n");
    
    for(int i=0;i<a;i++)
    {
        printf("%d\n",crarr[i]);
    }
}