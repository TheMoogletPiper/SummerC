#include <stdio.h>
#include <stdlib.h>

/* PROGRAM WITHOUT MAIN FUNCTION
    Simply enough, we define the name of that function to be the main function*/

#define secondary main


int secondary()
{
    printf("This is the main function");
    return 0;
}
