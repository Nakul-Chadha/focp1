/* Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1 */
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
        printf("\nEnter element :");
        scanf("%d",&b);
        arr[i]=b;
    }
    
    printf("Input : \n");

    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
    
    int counter_ifnone;

    printf("Output : \n");

    for (int i=0;i<a;i++)
    {
        int cnt=0;
        for(int j=0;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if (cnt>1)
        {
            printf("%d ",arr[i]);
            counter_ifnone++;
        }
    }
    if(counter_ifnone==0)
    {
        printf("\n-1");
    }
}