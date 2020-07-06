#include <stdio.h>
#include <stdlib.h>

int global=0; //Variables outside a function are global to the file, and can be varied by any function.

void increase(int *n){  //Parameter as a pointer to the address
    *n = *n + 1; //You can add numbers to the variable from main
    *n += 1;     //using these two formats.
    *n++;   //This one won't work.
    global++;
}

void password(){

    int pass=123, input;
    printf("Please, enter the password: ");
    scanf("%d", &input);
    fflush(stdin);
    if (input != pass){
        printf("\nWrong password!\n");
        password();
    } else {
        printf("\nCorrect password. Welcome.");
    }
}

void evenOrNot(int n){

    if (n%2!=0){
        printf("\nThe number isn't even.");
    } else {
        printf("\nThe number is even.");
    }
}


int main()
{
    int number;
    scanf("%d", &number);
    printf("Your number before increase function is: %d\n", number);
    fflush(stdin);
    increase(&number);
    printf("Your number after increase function is: %d\n", number);
    return 0;
}
