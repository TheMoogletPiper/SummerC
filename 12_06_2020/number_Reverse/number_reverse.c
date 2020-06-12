#include <stdio.h>
#include <stdlib.h>

/* NUMBER REVERSE
    This is a simple program that reverses a number input. The idea of the program is to
    get the %10 of the number input, store that result in another variable, divide the input by 10
    to get the next digit, and to add more numbers, we multiply our result variable by 10 and add
    the %10 of the number result.
*/

int main()
{
    int number, temp, rev=0;

    printf("Please, enter a number: ");
    scanf("%d", &number);
    fflush(stdin);

    temp = number; //Only in case we want to keep the original number for any reason

    while (number > 0){
        rev = (rev*10) + (number%10);
        number /= 10;
    }
    printf ("\n\nThe number %d reversed is %d\n", temp, rev);
    return 0;
}
