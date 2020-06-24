#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* HEXADECIMAL TO DECIMAL*/

int main()
{
    int n, i, hexa[10], deci=0;
    //double n;
    char str[10];

    printf("Please, enter a hexadecimal number: ");
    gets(str);  //Get the hexadecimal number as a string char value
    fflush(stdin);

    for(i=0; str[i]!='\0'; i++){    //Transform each char into an int
        if(str[i] > 47 && str[i] < 58){
            hexa[i] = (str[i]-48);
        }
        else if (str[i] > 64 && str[i] < 71){
            hexa[i] = (str[i]-55);
        }
        else if(str[i] > 96 && str[i] < 103){
            hexa[i] = (str[i]-87);
        }
    }

    n = (i-1);  //Store the value of the string length minus one (because the for loop will add one more value to i before getting to the end of string character)
                //Could also get the same value with n = (strlen(str) - 1);

    for(i=0; n>=0; i++){    //Another loop for the hexa array, adding the formula to get the decimal value based on the number and its position
        deci += (hexa[i]*(pow(16, n)));
        n--;
    }

    printf("\n\nThe decimal value of that number is: %d", deci);
    return 0;
}
