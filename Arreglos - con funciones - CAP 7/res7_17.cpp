/*
 * nombrePrograma:
 * descripcion:
 *Escribir el algoritmo que permita escribir el contenido
de una tabla de dos dimensiones (3 × 4).
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 4
using namespace std;

void crearMatriz(int x[][MAX],int *dfx,int *dcx);
void leerMatriz(int x[][MAX],int dfx,int dcx);
void mostrarMatriz(int x[][MAX],int dfx, int dcx);

int main () {
   int a[MAX][MAX];
   int fa,ca;
   crearMatriz(a,&fa,&ca);
   leerMatriz(a,fa,ca);
   mostrarMatriz(a,fa,ca);


   system("pause");
   return(0);

}

void crearMatriz(int x[][MAX],int *dfx,int *dcx){
   *dfx=3;
   *dcx=4;
}

void leerMatriz(int x[][MAX],int dfx,int dcx){
   int i,j;
   printf("Datos la MATRIZ \n");
   for(i=0;i<dfx;i++){
      for(j=0;j<dcx;j++){
         printf("Ingrese el punto (%d,%d): ",i+1,j+1);
         scanf("%d",&x[i][j]);
      }
      printf("\n");
   }
}

void mostrarMatriz(int x[][MAX],int dfx, int dcx){
   int i,j;
   for(i=0;i<dfx;i++){
      for(j=0;j<dcx;j++){
            printf("%d\t",x[i][j]);
         }
         printf("\n");
      }
}
