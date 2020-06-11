#include <stdio.h>
#include <stdlib.h>

/* FIBONACCI WITH RECURSION */


void fibonacci(int n){
    static unsigned long long int n0=0, n1=1, n2;

    if(n>0){    //As long as the input range is over 0, keep doing the Fibonacci loop
        n2 = n0+n1;
        n0 = n1;
        n1 = n2;
        printf(" %llu\n", n2);
        fibonacci(n-1); //Call the function again with the value of the range minus one
    }
}
int main()
{
    int range;
    printf("Please, input the range of the Fibonacci series: ");
    scanf("%d", &range);
    printf("\n\n 0\n 1\n");
    fibonacci(range-2); //Substract 2 from the range, as the two first numbers are already printed

}
