#include<stdio.h>

int main()
{
	int lines=8;
	for(int i=0; i<=4; i++)
	{
		for(int j=0; j<=i; j++)
		{		
			if(j%2==0)
				printf("0");
			else
				printf("1");
		}
		for(int k=1; k<=lines; k++)
		{
			printf(" ");
		}
			lines = lines-2;
		for(int m=0; m<=i; m++)
		{
			if(m%2==0)
			printf("0");
			else
			printf("1");	
		}

		printf("\n");
	}
    return 0;
}