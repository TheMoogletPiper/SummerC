#include <stdio.h>
#include <stdlib.h>


/* PALINDROME NUMBER
    A palindrome number is a number that is the same after reversing it i.e: 121, 12321, 4345434...

    The algorithm is the next:
        - Get number from user
        - Hold the number in a temporary variable
        - Reverse that number
        - Compare both to check. If they are the same, it's a palindrome
        - Else, not a palindrome
*/

int main()
{
    unsigned long long int number, resto, sum=0, temp; //An unsigned long long int will let us write more than the 10 digits limit that the simple int has

    printf("Please, input a number: ");
    scanf("%llu", &number);
    fflush(stdin);
    temp = number;  //Get the number and store it in the temp variable

    while (number > 0){
        resto = number%10;  //Get modulus 10 from the number and store it in the "resto" variable. That will store the last digit of the number input
        sum = (sum*10) + resto; //This will allow us to keep adding the digits from the "resto" variable in a standard format
        number = number/10; //Delete the last digit of our input number to do the loop again
    }

    if (sum==temp) //Check if all the digits swapped are the same as the input number (stored in the "temp" variable, NOT the number one, as we already worked with that one is already 0)
        {
        printf("\n\nThe number is a palindrome\n");
        } else {
        printf("\n\nThe number is not a palindrome\n");
        }

    return 0;
}
