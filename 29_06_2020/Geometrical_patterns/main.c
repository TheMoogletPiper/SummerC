#include <stdio.h>
#include <stdlib.h>


/* GEOMETRICAL PATTERNS
    Different patterns made just using operands and symbols
*/

void square(){

    int n;
    printf("Please, enter the dimensions: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
}

void hollow_square(){

    int n, i, j;
    printf("Please, enter the dimensions: ");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        if (i==0 || i==(n-1)){
            for (j=0; j<n; j++){
                printf("*");
            }
        } else {
            for (j=0; j<n; j++){
                if (j==0 || j==(n-1)){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

/* SIMPLIFIED HOLLOW SQUARE PATTERN

    void hollow_square_simp()
    {
        int n;
        printf("Enter the dimensions: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==1 ||i==n||j==1||j==n)  Just print whenever these conditions are met: first row, last row, first column, last column.
                {
                printf("*");
                }
                else
                printf(" ");
            }
            printf("\n");
        }
    }

*/

void hollow_square_crossed(){
    int n;
    printf("Please, enter the dimensions: ");
    scanf("%d", &n);
    fflush(stdin);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0|| j==0|| i==(n-1)|| j==(n-1)|| i==j|| j==(n-i-1)){
                //These are the conditions that need to be met in order to print: first and last row and column (to make a hollow square),
                //same value of i and j to make the first diagonal, and the result of n minus the row we are currently are, minus one.
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void rhombus(){

    int n, k=0, temp;
    printf("Please, enter the dimensions: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
        k++;
        for (temp=k; temp>0; temp--){
            printf(" ");
        }
    }
}
void hollow_rhombus(){

    int n, k=0, temp;
    printf("Please, enter the dimensions: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i>0 && i<(n-1) && j>0 && j<(n-1)){ //Print a blank space whenever these conditions are met to make it hollow
                printf(" ");
            } else {
            printf("*");
            }
        }
        printf("\n");
        k++;
        for (temp=k; temp>0; temp--){
            printf(" ");
        }
    }
}

void mirrored_rhombus(){
    int n, k, temp;
    printf("Please, enter the dimensions: ");
    scanf("%d", &n);
    k = (n-1);
    for (int i=0; i<n; i++){
        for (temp=k; temp>0; temp--){
            printf(" ");
        }
        k--;
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
}



int main()
{
    hollow_square_crossed();
    return 0;
}
