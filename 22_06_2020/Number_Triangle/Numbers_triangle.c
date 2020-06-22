#include <stdio.h>
#include <stdlib.h>

/*NUMBERS TRIANGLE*/

int main()
{
    int n, i, j, k;

    printf("Please, enter a number: ");
    scanf("%d", &n);
    fflush(stdin);
    printf("\n");

    for (i=1; i<=n; i++){
        for (j=0; j<(n-i); j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("%d", k);
        }
        for(k=(i-1); k>0; k--){
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
