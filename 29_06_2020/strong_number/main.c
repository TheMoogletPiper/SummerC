#include <stdio.h>
#include <stdlib.h>

/* STRONG NUMBER
    A strong number is that which the sum of the factorials of each of its digits is the same as the original number
    i.e: 145 -> 1! + 4! + 5! = 145
*/
int main()
{
    int n, temp, modu, factorial, sum=0;

    printf("Please, enter a number: ");
    scanf("%d", &n);
    fflush(stdin);
    temp = n;   //Get the number and store it in two variables, as one of those is gonna get reduced to zero

    while (n > 0){
        modu = n%10;
        n /= 10;    //Get the LSD, store it in modu var and eliminate that digit from the original number
        factorial = 1;  //Don't forget to reset factorial to one, otherwise it will store the one from the latest loop
        while (modu > 0){   //Factorial loop
            factorial = factorial * modu;
            modu --;
        }
        sum += factorial;   //Add the factorial result to another variable to sum them all
    }


    if (sum == temp){
        printf("The number is a strong number");
    } else {
        printf("The number is not a strong number");
    }
    return 0;
}
