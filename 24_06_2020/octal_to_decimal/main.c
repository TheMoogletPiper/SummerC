#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*OCTAL TO HEXADECIMAL*/



int main()
{

    int octal, octalArray[10], i, j=0, k=0, l=0, counter=0, octalToBinary[20], binaryToB4[4], hexCheck=0;

    char b4ToHexa[30];

    printf("Please, enter a number in octal base: ");
    scanf("%d", &octal);
    fflush(stdin);

    for(i=0; octal!=0; i++){    //Get the octal number into an array

        octalArray[i] = octal%10;
        octal /= 10;
        if (octalArray[i] > 7){ //Check that no number is over 7
            printf("Error. Octal digits can't be more than 7.");
            return 0;
        }
        for(; octalArray[i] > 0; j++){  //Get every digit into binary

            octalToBinary[j] = octalArray[i] % 2;
            octalArray[i] /= 2;
        }
        while ((j%3)!=0){   //If the binary number doesn't have 3 digits, fill it up with 0's
            octalToBinary[j] = 0;
            j++;

        }
    }
    //Here i already have the octal number in binary form, but every three digits it represents an octal number.

    while (j%4!=0){
        octalToBinary[j] = 0;
        j++;
    }
    //Here we have filled up the number in binary that we have to fix it for 4 digits
    j--;
    k = j;
    j=3;

    for(i=0; j<=k; j--){
        binaryToB4[i] = octalToBinary[j];
        i++;
        counter++;
        if (counter%4==0){
            for (; i>=0; i--){
                b4ToHexa[l] += (binaryToB4[i]*(pow(2, i)));
                hexCheck += b4ToHexa[l];
                if (hexCheck > 9){
                    switch (b4ToHexa[l]){
                        case 10:
                            b4ToHexa[l] = 'A';
                            break;
                        case 11:
                            b4ToHexa[l] = 'B';
                            break;
                        case 12:
                            b4ToHexa[l] = 'C';
                            break;
                        case 13:
                            b4ToHexa[l] = 'D';
                            break;
                        case 14:
                            b4ToHexa[l] = 'E';
                            break;
                        case 15:
                            b4ToHexa[l] = 'F';
                            break;
                    }
                }
                //Successfully added a digit to our hexa number
            }
            j += 8;
            i = 0;
        }
    }
    b4ToHexa[l] = '\0';
    //for (; j>=0; j--){
    //    printf("%d", octalToBinary[j]);
    //}


    for(l=0; b4ToHexa[l]!='\0'; l++){
        printf("%s", b4ToHexa[l]);
    }

    return 0;

    //UNFINISHED FOR MY OWN SANITY, WILL TRY TO FINISH IT OFF ANOTHER DAY
}
