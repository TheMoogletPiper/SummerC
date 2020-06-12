#include <stdio.h>
#include <stdlib.h>

/* 2 VARIABLES NUMBER SWAP
    Usually we can swap two numbers using +&- or *&/.
*/


int main()
{
    int a, b;
    printf("Please, input two numbers to swap\n\nA: ");
    scanf("%d", &a);
    fflush(stdin);
    printf("B: ");
    scanf("%d", &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("The numbers swapped are %d for A and %d for B", a, b);
    return 0;
}

//The same result would be achieved using * instead of + and / instead of -
