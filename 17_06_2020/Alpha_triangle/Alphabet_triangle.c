#include <stdio.h>
#include <stdlib.h>

/* ALPHABET TRIANGLE
    The idea is to create a pyramid-like structure, in which the first letter always comes first, achieves its max in the middle,
    and goes back to the first letter by the end of the line.

    To achieve this, we have to keep in mind the blank spaces we need starting from the first line and how many lines
    we want to print.
*/


int main()
{
        int ch = 65, i, j, k, m;

        for (i=1; i<=5; i++){   //First loop which includes what will happen in every line.
            for(j=5; j>=i; j--){    //Blank spaces loop. We will have a max of 5 blank spaces in the first line, which will go down as the first loop happens
                printf(" ");
            }
            for (k=1; k<=i; k++){   //Left side loop. We will divide the pyramid in two parts, left+mid and right side.
                printf("%c", ch);   //As the loop goes, it will print the first character in the spot left by the "j" loop
                ch++;               //and increase its value to then repeat itself
            }
            ch--;   //IMPORTANT to reduce the value of ch once the "k" loop finishes, as the value of ch is one over the last char we printed.
            for(m=1; m<i; m++){     //Right side loop, which will print ch and going down back to the first value of ch
                ch--;
                printf("%c", ch);
            }
            printf("\n");   //Print a new line as the printing loop finishes to start the next line
        }
        return 0;
}
