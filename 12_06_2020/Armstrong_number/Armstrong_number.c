#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ARMSTRONG NUMBER
        An armstrong number is that which the sum of the cube of all its digits is the same as that same number
        i.e: 153 -> 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

        The algorithm would be something like this:
            -Get a number input and store it in a temp variable.
            -Work with that number taking the %10 to grab each digit.
            -Multiply that digit by itself three times and add it to a result variable.
            -Do the same with all the digits.
            -If the result variable is equal to the temp variable, then it's an armstrong number, otherwise not.
    */
    int number, modu, temp, result=0;

    printf("Please, input a number: ");
    scanf("%d", &number);
    fflush(stdin);

    temp = number;

    while (number > 0){             //This is a common while loop to check out each of the digits and operate with them
        modu = number%10;
        result += (modu*modu*modu);
        number=number/10;
    }
    if (result == temp){
        printf("\n\nThe number %d is an armstrong number\n", temp);
        } else {
        printf("\n\nThe number %d is not an armstrong number\n", temp);
        }

    return 0;
}
