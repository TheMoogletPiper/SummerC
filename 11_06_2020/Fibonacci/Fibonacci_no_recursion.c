#include <stdio.h>
#include <stdlib.h>


/* FIBONACCI SERIES WITHOUT RECURSION
    The fibonacci series is the sum of the two previous numbers, being
    0 and 1 the first two
*/

int main()
{
    unsigned int n0=0, n1=1, n2, i=2, range;

    //First, we will ask the user to input up until what number the series will go
    printf("Please, input the range of the Fibonacci series: ");
    scanf("%d", &range);
    printf("\n\n%d %d", n0, n1); //Print the first two numbers out of the loop, as they will always be these two


    //"i" will be our guide number to go up until the range number, to do a while loop
    while (i != range){
        n2 = n0 + n1; //Sum of the two previous numbers
        n0 = n1;    //Give n0 the value of the next number
        n1 = n2;    //Give n1 the value of the next number
                    //This process allows us to keep up with the "previous number" premise
        printf(" %d", n2); //Print the next number
        i++;
    }
    return 0;
}


