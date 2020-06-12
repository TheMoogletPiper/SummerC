#include <stdio.h>
#include <stdlib.h>

/* SUM OF DIGITS
    A simple program that gets the modulus 10 of each number and adds it all up.
    To make it a bit more interesting, I've done it so the program detects if the
    number is a multiple of 3. A number is multiple of 3 if the %3 of the sum of all the
    digits of that number is equal to 0.
*/



int main()
{
    int number, temp, sum=0;

    printf("Please, enter a number: ");
    scanf("%d", &number);
    fflush(stdin);

    temp = number;

    while (number > 0){
        sum += number%10;
        number /= 10;
    }
    if ((sum%3) == 0) {
        printf("\n\nThe number %d is a multiple of 3\n", temp);
    } else {
        printf("\n\nThe number %d is not a multiple of 3\n", temp);
    }
    return 0;
}
