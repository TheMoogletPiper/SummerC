#include <stdio.h>
#include <stdlib.h>

/* FIBONACCI TRIANGLE */

int main()
{
    int range, n0=0, n1=1, n2, i, j;

    printf("Please, enter a number: ");
    scanf("%d", &range);
    fflush(stdin);
    printf("\n");

    for (i=1; i<=range; i++){
        n0=0;       //Starting point numbers for Fibonacci series
        n1=1;
        printf("%d\t", n1);
        for(j=1; j<i; j++){ //j < i assures us that it wont get executed in the first line

            n2 = n1 + n0;   //triple variable loop to get Fibonacci series
            n0 = n1;
            n1 = n2;

            printf("%d\t", n2);
        }
        printf("\n");
    }




    return 0;
}
