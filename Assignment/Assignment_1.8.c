#include <stdio.h> 
void main()
{
    int i, j, n, True, False; 
    printf("Input number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            True= 1;
            False = 0;
        }
        else
        {
            True= 0;
            False = 1;
        }

        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                printf("%d", True);
            else
                printf("%d", False);
        }

        printf("\n");
    }
}