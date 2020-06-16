#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 9
/* DECIMAL TO BINARY TO DECIMAL
    Decimal numbers are base 10. That means, we are using 10 different numbers (0, 1, 2...9), as opposed to binary, which is base 2
    and only uses two numbers to display information, 0 and 1. Through different combinations of those, we will be able to display about
    any decimal number, as long as we have enough bits (digits) to display that number.

    01 - 1
    10 - 2
    11 - 3
    100 - 4
    101 - 5
    110 - 6

    The algorithm should work like this:

        - Do the mod 2 of the number input, which will give us a remainder of either 1 or 0. Store it in a string.
        - Divide the number input by 2.
        - Repeat until the number input is less or equal to zero.
        - The string result is the inverted binary number, so we will need to display it by going from the highest value
        of the string (minus one, which is the '\0' end of string char), to the lowest (zero).
*/
void simpleBinary()
{
        int binary[10], decimal, i;

        printf("Please, enter a decimal number: ");
        scanf("%d", &decimal);
        fflush(stdin);

        for (i=0; decimal > 0; i++){
            binary[i] = decimal % 2;
            decimal /= 2;
        }
        printf("\n\nThe number in binary is ");

        for (i=i-1; i>=0; i--){
            printf("%d", binary[i]);
        }
}

//As expected, this function can't handle negative numbers, as the first 'for' loop will just go on until the number input is less than zero.
//To achieve that, we will need to add a '-' char before the binary number, but also convert the decimal number to a positive one.

void negativeBinary()
{
        int binary[10], decimal, i, n=0;

        printf("Please, enter a decimal number: ");
        scanf("%d", &decimal);
        fflush(stdin);

        if (decimal < 0){
            n++;
            decimal *= -1;
        }

        for (i=0; decimal > 0; i++){
            binary[i] = decimal % 2;
            decimal /= 2;
        }
        printf("\n\nThe number in binary is ");

        if (n > 0){
            putchar('-');
        }
        for (i=i-1; i>=0; i--){
            printf("%d", binary[i]);
        }
}

//This can handle negative number and it will output them as negative binary numbers.
//We can achieve the same using a signed int which will display the number as a negative using a bit for the sign
//WORK IN PROGRESS
void signedBinary(){

        char binary[9];
        int decimal, i;

        printf("Please, enter a number: ");
        scanf("%d", &decimal);

        if (decimal < 0){
            decimal *= -1;
            for (i=0; decimal > 0; i++){
                binary[i] = (decimal % 2) - 48;
                decimal /= 2;
            }
            while (i != MAX_SIZE){
                binary[9] >>= 1;
                i++;
            }
            for (i=0; binary[i]!='\0'; i++){
                if (binary[i] == 0){
                    binary[i] = 1;
                }else{
                    binary[i] = 0;
                }
            }
            for (i=0; binary[i]!='\0'; i++){
                if (binary[i] == 0){
                    binary[i] ++;
                    break;
                } else {
                    binary[i] = 0;
                }
            }
            printf("\n\nThe number in binary is ");
            for (i=i-1; i>=0; i--){
                printf("%d", binary[i]);
            }
        }

}

int bitOffset(char n[]){

    int i;
    for (i = 0; i!=MAX_SIZE; i++){
        n >>= 1;
    }
    return n;

}

int main(){

        char a[9] = {0, 0, 1,};
        printf("%d", bitOffset(a));
        return 0;
}

