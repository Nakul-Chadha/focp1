#include <stdio.h>

int adder(int a, int b) {
    int i = 1;
    int sum  = 0;
    int atemp, btemp, ctemp;

    while (i)
    {
        atemp = a & i;
        btemp = b & i;
        ctemp = sum & i;

        sum = sum ^ atemp ^ btemp;  
        i = i << 1;

        if ((atemp&btemp)|(ctemp&atemp)|(ctemp&btemp)) sum = sum^i;
    }

    return sum;
}

int sub(int a, int b) {
    return adder(a, adder(~b, 1));
}


int main() {
    int a,b;
    printf("Enter a no. to be subtracted : ");
    scanf("%d",&a);
    printf("Enter a no. to subtract with : ");
    scanf("%d",&b);

    printf("%d - %d = %d\n", a, b, sub(a, b));

    return 0;
}