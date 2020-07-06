#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Tficha{   //Struct and its identifier

    char nombre[20];
    int expediente, nota[3], notaMedia;

} fichaAlumno[10]; //Struct variable

struct Tcontacto{

    char nombre[20], telefono[20];
    int edad;

} contacto;

struct Tplayer{

    char name[10];
    int points;

} players[5];





int main()
{
    /*printf("\nIntroduce tu nombre: ");
    gets(contacto.nombre);
    printf("\nIntroduce tu edad: ");
    scanf("%d", &contacto.edad);
    fflush(stdin);
    printf("\nIntroduce tu numero de tlf: ");
    gets(contacto.telefono);

    printf("\n\n%s, tienes %d anios y tu tlf es el %s.", contacto.nombre, contacto.edad, contacto.telefono);
    */


    /*for(int i=0; i<=9; i++){
        fichaAlumno[i].notaMedia = 0;
        printf("\n\nIntroduce el nombre del alumno: ");
        gets(fichaAlumno[i].nombre);
        for(int j=0; j<=2; j++){
            printf("\nIntroduce la nota %d: ", (j+1));
            scanf("%d", &fichaAlumno[i].nota[j]);
            fflush(stdin);
            fichaAlumno[i].notaMedia += fichaAlumno[i].nota[j];
        }
        fichaAlumno[i].notaMedia /= 3;
        printf("\n\nLa nota media de %s es %d", fichaAlumno[i].nombre, fichaAlumno[i].notaMedia);
    }
    */

    for (int i=0; i<=4; i++){
        printf("\nEnter the player name: ");
        gets(players[i].name);
        printf("\nEnter the score: ");
        scanf("%d", &players[i].points);
        fflush(stdin);
    }
    char maxPlayer[10], minPlayer[10];
    strcpy(maxPlayer, players[0].name);
    strcpy(minPlayer, players[0].name);
    int maxScore = players[0].points, minScore = players[0].points;

    for (int i=1; i<=4; i++){
        if (players[i].points > maxScore){
            maxScore = players[i].points;
            strcpy(maxPlayer, players[i].name);
        }
        if (players[i].points < minScore){
            minScore = players[i].points;
            strcpy(minPlayer, players[i].name);
        }
    }


    printf("\n\n%s has the highest score with %d points.", maxPlayer, maxScore);
    printf("\n\n%s has the lowest score with %d points.", minPlayer, minScore);


    return 0;
}
