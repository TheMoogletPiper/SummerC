#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*MATRIX OPERATIONS
    In a matrix, we have a set of numbers divided in columns and rows. Calling a variable a[x][y], we are declaring it as
    a matrix, as it's a variable that depends on other two (x & y) to know the position of the matrix that we are at.

    1   2   3
    4   5   6   =  a;   For example, the number 5 corresponds to a[2][2], as it's the number associated to the matrix a in the column 2 and row 2.
    7   8   9

    We can do different operations, as adding or subtracting two matrices (they need to have both the same dimension), multiply two matrices
    (The number of columns of the first needs to be equal to the number of rows of the second) or dividing a matrix by a number (but not two matrices).
*/

void addMatrix(){

        int a[10][10], b[10][10], sum[10][10], r, c, i, j;      //r stands for row, c for column, i & j are standard dimension variables


        system("cls");
        printf("Enter the number of rows of the matrices: ");
        scanf("%d", &r);
        fflush(stdin);
        printf("Enter the number of columns of the matrices: ");
        scanf("%d", &c);
        fflush(stdin);

        printf("\nEnter the values of the first matrix:\n\n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                a[i][j] = getche();     //getche allows us to make a nice input and display, as we will introduce the values without needing to press intro
                a[i][j] -= 48;          //getche reads a character input, so we transform it into the actual decimal value
                fflush(stdin);          //PROBLEM: The only input allowed is single digits!
                printf("\t");

            }
            printf("\n");
        }

        printf("\nEnter the values of the second matrix:\n\n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                b[i][j] = getche();
                b[i][j] -= 48;
                fflush(stdin);
                printf("\t");
            }
            printf("\n");
        }

        printf("\nThe sum of the two matrices is:\n\n");           //subtraction of two matrices has the same process but using minus operand
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                sum[i][j] = 0;
                sum[i][j] = (a[i][j]) + (b[i][j]);
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
}


void multiplyMatrix(){

        int a[10][10], b[10][10], mult[10][10], r, c, i, j, k;  //Matrix multiply is a process in which the value of c[0][0] is equal to (a[0][0]*b[0][0] + a[0][1]*b[1][0] + a[0][2]*b[2][0]...)

        system("cls");
        printf("Enter number of rows: ");
        scanf("%d", &r);
        printf("Enter number of columns: ");
        scanf("%d", &c);

        printf("Enter the first matrix elements: \n");

        for (i=0; i<r; i++){
            for(j=0; j<c; j++){
                scanf("%d", &a[i][j]);
                fflush(stdin);
                printf("\t");
            }
            printf("\n");
        }

        printf("Enter the second matrix elements: \n");

        for (i=0; i<r; i++){
            for(j=0; j<c; j++){
                scanf("%d", &b[i][j]);
                fflush(stdin);
                printf("\t");
            }
            printf("\n");
        }

         for (i=0; i<r; i++){       //Multiply of matrix
            for(j=0; j<c; j++){
                mult[i][j] = 0;
                for(k=0; k<c; k++){
                    mult[i][j]+= a[i][k]*b[k][j];
                }
            }
         }

        for (i=0; i<r; i++){            //Print of matrix
            for(j=0; j<c; j++){
                printf("%d\t", mult[i][j]);
            }
            printf("\n");
        }
}

void divideMatrix(){

        int a[10][10], b, c, r, i, j;

        printf("Enter the number of rows: ");
        scanf("%d", &r);
        fflush(stdin);
        printf("Enter the number of columns: ");
        scanf("%d", &c);
        fflush(stdin);

        printf("Enter the values of the matrix:\n\n");      //Unfinished while I find a decent way to display input matrix
        for (i=0; i<r; i++){
            for (j=0; j<c; j++){

            }
        }

}


int main()
{



    return 0;
}
