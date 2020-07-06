#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct tFicha{

    char name[30];
    int age;
} ficha;


int main()
{
    FILE *file; //Variable pointer type file
    FILE *fichero;

    /*char str[20] = "Texto para file";

    file = fopen("C:/Users/Mikes/C/files/prueba.txt", "w"); //Opens or creates a file in said directory (file directory + name, operation)
    if (file == NULL){  //if file isn't open, returns NULL
        printf("The file didn't open.");
    } else {
        fputc('B', file);   //put a char on file
        fputs("\nString", file); //put a string on file
    }

    fwrite(&str, strlen(str), 1, file); //Write whatever we throw as a first argument (things to write, size of what's to write, number of elements of said size, dest)
    fclose(file);


    int n;
    fichero = fopen("C:/Users/Mikes/C/files/ficha.txt", "wt");
    if (fichero == NULL){
        printf("The file didn't open.\n");
    } else {
        for (n=0; n<=2; n++){
            printf("\n\nName: ");
            gets(ficha.name);
            fflush(stdin);
            printf("\n\nAge: ");
            scanf("%d", &ficha.age);
            fflush(stdin);
            fwrite(&ficha, sizeof(ficha), 1, fichero);
        }
        fclose(fichero);
    }


    char character;
    fichero = fopen("C:/Users/Mikes/C/files/ficha.txt", "rt");

    if(fichero == NULL){
        printf("The file didn't open");
    } else {
        character = fgetc(fichero); //file_get_character, the value of the first character is stored in our variable
        while (feof(fichero) == 0){ //As long as file_end_of_file is equal to zero, it means that it didn't reach the end of file
            printf("%c", character); //Shows the content of character
            character = fgetc(fichero); //as we operate with the character in the file, it advances to the next one automatically
        }
        fclose(fichero);
    }
    */

    fichero = fopen("C:/Users/Mikes/C/files/ficha.txt", "rt");
    if (fichero == NULL){
        printf("The file didn't open.");
    } else {
        fread(&ficha, sizeof(ficha), 1, fichero);
        while (feof(fichero)==0){
            printf("\n\nNombre: %s", ficha.name);
            printf("\n\nEdad: %d", ficha.age);
            fread(&ficha, sizeof(ficha), 1, fichero);
        }
        fclose(fichero);
    }

    return 0;
}
