#include <stdio.h>
#include <stdlib.h>

/* FACTORIAL NUMBER. LOOP.
    A factorial is the result of multiplying the number given by the next ones down to one
    i.e: 5! = 5*4*3*2*1 = 120
*/

int main()
{
    int number, temp;
    unsigned long long int factorial = 1;


    printf("Please, enter a number: ");
    scanf("%d", &number);
    fflush(stdin);
    temp = number;

    while (number > 0){

        factorial = factorial*number;
        number--;
    }
    printf("\n\nThe factorial of %d is %lu\n", temp, factorial);
    return 0;
}

