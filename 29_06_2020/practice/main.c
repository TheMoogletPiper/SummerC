#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void fraseInvertida(){

    char str[20];
    int i;

    printf("Introduce una frase: ");
    gets(str);

    for (i=(strlen(str))-1; i>=0; i--){
        printf("%c", str[i]);
    }


}





void palabrasAlfabeticas(){
    char str1[10], str2[10];

    printf("Introduce una primera palabra: ");
    scanf("%s", &str1);
    fflush(stdin);
    printf("Introduce una segunda palabra: ");
    scanf("%s", &str2);
    fflush(stdin);

    if (strcmp(str1, str2) < 0){
        printf("\n%s\n%s", str1, str2);
    } else if (strcmp(str1, str2) > 0){
        printf("\n%s\n%s", str2, str1);
    } else {
        printf("Las palabas son iguales");
    }
}





void char_in_str(){
    char str[20], a;
    int n=0, i;

    printf("Introduce una frase: ");
    gets(str);
    printf("\n\nIntroduce un caracter: ");
    a = getche();

    for(i=0; str[i]!='\0'; i++){
        if (str[i] == a){
            n++;
        }
    }
    printf ("\n\n%d", n);
}


void stringtok(){

    char string[100];
    char *pointer;

    printf("Write various words separated by commas and without blank spaces: ");
    gets(string);

    pointer = strtok(string, ",");
    if (pointer){
        printf("\n%s", pointer);
    }

    while (pointer = strtok(NULL, ",")){
        printf("\n%s", pointer);
    }

}




void string_string(){

    char str1[20], str2[10];
    strcpy(str1, "Test lookingfor string");

    do{
        printf("Check if this word is in the string: ");
        gets(str2);
        if (strstr(str1, str2)==NULL){
            printf("\nThe word is not in the string!\n\n");
        }
    } while (strstr(str1, str2)==NULL);
    printf("The word is in the string!");
}




void string_comp()
{
    char pass[20];

    do{
        printf("Password: ");
        gets(pass);
        fflush(stdin);
    } while (strcmp(pass, "HoLa") != 0);

    printf("Password correct!");
}







int main(){
    fraseInvertida();
    return 0;
}
