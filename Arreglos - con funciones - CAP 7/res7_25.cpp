/*
 * nombrePrograma:
 * descripcion:
 *
 *Las notas de un colegio se tienen en una matriz de
30 × 5 elementos (30, número de alumnos; 5, número
de asignaturas). Se desea listar las notas de cada alumno
y su media. Cada alumno tiene como mínimo dos
asignaturas y máximo cinco, aunque los alumnos no
necesariamente todos tienen que tener cinco materias.
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAXF 30
#define MAXC 5
using namespace std;
void crearMatriz(char x[][MAXC],int *dfx,int *dcx);
void leerMatriz(char x[][MAXC],int dfx,int dcx);
void mostrarMatriz(char x[][MAXC],int dfx, int dcx);


int main () {
   char a[MAXF][MAXC];
   int fa,ca;
   crearMatriz(a,&fa,&ca);
   leerMatriz(a,fa,ca);
   mostrarMatriz(a,fa,ca);
   system("pause");
   return(0);

}
void crearMatriz(char x[][MAXC],int *dfx,int *dcx){
   *dfx=2;
   *dcx=3;
}

void leerMatriz(char x[][MAXC],int dfx,int dcx){
   int i=0,j,seguir,cont=0;
   printf("Datos matriz \n");
   do{
      j=0;
      cont=0;
      printf("Notas del alumno %d\n",i+1);
      do{
         while(cont!=2){
         printf("Ingrese la nota para la asignatura %d: ",j+1);
         scanf("%c",&x[i][j]);
         getchar();
         j++;
         cont++;
         }
         printf("Desea ingresar otra nota? (1:seguir): ");
         scanf(" %d",&seguir);
         getchar();
         if(seguir==1){
            printf("Ingrese la nota para la asignatura %d: ",j+1);
            scanf("%c",&x[i][j]);
            getchar();
            j++;
         }
         if(seguir!=1){

            do{
            x[i][j]='-';
            j++;
            }while(j<=dcx);
         }
      }while(seguir==1 &&j<dcx);
      i++;

   }while(i<dfx);

}

void mostrarMatriz(char x[][MAXC],int dfx, int dcx){
   int i,j;
   for(i=0;i<dfx;i++){
      printf("Notas de alumno %d:\t",i+1);
      for(j=0;j<dcx;j++){
         printf("%c\t",x[i][j]);
      }
      printf("\n");
   }
}
