/*
 * nombrePrograma:
 * descripcion:
 *Calcular la suma de los elementos de la diagonal principal
de una matriz cuatro por cuatro (4 × 4).
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MATRIZ 4
using namespace std;

void crearMatriz(int x[][MATRIZ],int *dfx,int *dcx);
void leerMatriz(int x[][MATRIZ],int dfx,int dcx);
void mostrarMatriz(int x[][MATRIZ],int dfx, int dcx);
void sumaMatriz(int x[][MATRIZ],int dfx, int dcx);

int main () {
   int a[MATRIZ][MATRIZ];
   int fa,ca;
   crearMatriz(a,&fa,&ca);
   leerMatriz(a,fa,ca);
   mostrarMatriz(a,fa,ca);
   sumaMatriz(a,fa,ca);


   system("pause");
   return(0);

}

void crearMatriz(int x[][MATRIZ],int *dfx,int *dcx){
   *dfx=4;
   *dcx=4;
}

void leerMatriz(int x[][MATRIZ],int dfx,int dcx){
   int i,j;
   printf("Datos matriz \n");
   for(i=0;i<dfx;i++){
      for(j=0;j<dcx;j++){
         printf("Ingrese el valor (%d,%d): ",i+1,j+1);
         scanf("%d",&x[i][j]);
      }
      printf("\n");
   }

}

void mostrarMatriz(int x[][MATRIZ],int dfx, int dcx){
   int i,j;
   for(i=0;i<dfx;i++){
      for(j=0;j<dcx;j++){
         printf("%d\t",x[i][j]);
      }
      printf("\n");
   }
}

void sumaMatriz(int x[][MATRIZ],int dfx, int dcx){
   int i,j,sum=0;
   for(i=0;i<dfx;i++){
      for(j=0;j<dcx;j++){
         if(i==j){
            sum = sum + x[i][j];
         }
      }
   }
   printf("\nLa suma de la diagonal es: %d\n",sum);

}
