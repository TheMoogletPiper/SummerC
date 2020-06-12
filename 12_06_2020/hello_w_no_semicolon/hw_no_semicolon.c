#include <stdio.h>
#include <stdlib.h>

/* PRINT HELLO WORLD WITHOUT SEMICOLON
    There are different ways to do this. Using an if statement, a switch, a loop...
*/

void hwIf(){
    if (printf("Hello world!")){} //The if statement will run checking first the argument, which is already saying to print
                                //Hello world, and doing nothing else inside that same if statement.
    return 0;
}

void hwSwitch(){
    switch (printf("Hello world!")){}

    return 0;
}

void hwWhile(){
    while(!printf("Hello World")){} //In this case, the statement is preceded by the ! sign
                                    //otherwise the while loop would go on forever.

    return 0;
}

int main()
{
    hwWhile();
    return 0;
}


