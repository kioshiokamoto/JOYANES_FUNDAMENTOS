/*
 * nombrePrograma:
 * descripcion:
 *Se tienen las calificaciones de los alumnos de un curso de informática correspondiente a las asignaturas BASIC,
Pascal, FORTRAN. Diseñar un algoritmo que calcule la media de cada alumno.
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 100
using namespace std;

int main () {
   char NOMBRE[MAX];
   char salir[]="***";
   float basic,pascal,fortran,promedio;

      do{
         printf("Escriba el nombre del alumno -> ");
         gets(NOMBRE);
         if(strcmp(NOMBRE,salir)!=0){
            do{
            printf("Escriba la nota de BASIC -> ");
            scanf("%f",&basic);
            }while(basic<0 || basic>20);
            do{
            printf("Escriba la nota de Pascal -> ");
            scanf("%f",&pascal);
            }while(pascal<0 || pascal>20);
            do{
            printf("Escriba la nota de FORTRAN -> ");
            scanf("%f",&fortran);
            }while(fortran<0 || fortran>20);
            promedio=(basic+pascal+fortran)/3.0;
            printf("El promedio del alumno %s es %.2f\n",NOMBRE,promedio);
            getchar();
         }
      }while(strcmp(NOMBRE,salir)!=0);



   system("pause");
   return(0);

}
