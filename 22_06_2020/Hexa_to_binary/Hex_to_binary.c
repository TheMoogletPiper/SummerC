#include <stdio.h>
#include <stdlib.h>

/* HEXADECIMAL TO BINARY */



int main()
{
    int n[20], i=0, binary[100], j=0;
    char hexa[21];      //We store the hexadecimal number as a char string

    printf("Please, enter a hexadecimal number: ");
    gets(hexa);
    fflush(stdin);
    for (i=0; hexa[i]!='\0'; i++){  //Translate the char values to decimal values, each stored in n[i]
        n[i] = hexa[i];
        if (n[i] > 64 && n[i] < 71){
            n[i] -= 55;
        }
        if (n[i] > 96 && n[i] < 103){
            n[i] -= 87;
        }
        if (n[i] > 47 && n[i] < 58){
            n[i] -= 48;
        }
    }
    i--;
    for (; i>=0; i--){ //Transform those decimal values into binary values, stored into binary[j]
        for(; n[i]>0; j++){
            binary[j] = n[i]%2;
            n[i] /= 2;
        }
        while((j%4)!=0){
            binary[j]=0;
            j++;
        }
    }
    printf("\n\nThe number in binary is: ");
    for (j=(j-1); j>=0; j--){   //Print the binary[j] in reverse order
        printf("%d", binary[j]);
    }
    printf("\n\nEach four digits represents a number in binary, being 0001 = 1 and 1111 = F in hexadecimal.\n");

    return 0;
}
