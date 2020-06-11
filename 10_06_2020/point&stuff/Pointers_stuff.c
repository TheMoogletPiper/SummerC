#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int x = 10;
    int *y = &x;    //We make a pointer variable (preceded with *) that stores the direction of another variable (preceded by &)


    printf("%p\n", y); //In this case, we are going to print the direction of the variable x. Notice %p to print an address.
    printf("%d\n", *y); //In this one, the content stored in the direction that the pointer has stored (the content of x)

    char letra = getchar(); //getchar lets the user write stuff until they hit enter, but will only store the first char they introduced. Has echo (will get displayed)
    putchar(letra); //putchar will display a char, "letra" in this case
    printf("\n");
    int numero = getch(); //getch (from conio.h) will directly store the next character pressed on the keyboard, without waiting for the user to press enter. Doesn't have echo.
    putchar(numero); //We will need to use putchar if we want to see the character stored by getch, otherwise it won't be shown on the screen



    return 0;
}
