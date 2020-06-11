#include <stdio.h>
#include <stdlib.h>

/* FACTORIAL NUMBER. RECURSIVE */

long fFactorial(int n){

    if (n==0){
        return 1;
    }   else{
        return (n*fFactorial(n-1)); //This recursion keeps giving a return which is n multiplied by the function with n-1 over and over until it reaches 0.
                                    //At that point, the result of the return is the "sum" of all the returns (5*4*3*2*1)
    }
}
int main()
{
    int number;

    printf("Please, enter a number: ");
    scanf("%d", &number);
    fflush(stdin);

    printf("\n\nThe factorial of %d is %lu\n", number, fFactorial(number));
    return 0;
}
