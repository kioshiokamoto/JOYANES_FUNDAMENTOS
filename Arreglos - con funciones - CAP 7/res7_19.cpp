/*
 * nombrePrograma:
 * descripcion:
 *
 *Escribir un algoritmo que permita sumar el número
de elementos positivos y el de negativos de una tabla
T de n filas y m columnas.
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100
using namespace std;

void crearMatriz(int x[][MAX],int *dfx,int *dcx);
void leerMatriz(int x[][MAX],int *dfx,int *dcx);
void mostrarMatriz(int x[][MAX],int dfx, int dcx);
void sumaPosiNega(int x[][MAX],int dfx, int dcx);


int main () {
   int a[MAX][MAX];
   int fa,ca;
   crearMatriz(a,&fa,&ca);
   leerMatriz(a,&fa,&ca);
   mostrarMatriz(a,fa,ca);
   sumaPosiNega(a,fa,ca);



   system("pause");
   return(0);

}

void crearMatriz(int x[][MAX],int *dfx,int *dcx){
   *dfx=-1;
   *dcx=-1;
}

void leerMatriz(int x[][MAX],int *dfx,int *dcx){
   int i,j,filas,colum;
   do{
      printf("Ingrese la cantidad de filas: ");
      scanf("%d",&filas);
   }while(filas<=0);
   do{
      printf("Ingrese la cantidad de columnas: ");
      scanf("%d",&colum);
   }while(colum<=0);
   *dfx=filas;
   *dcx=colum;
   printf("Datos matriz \n");
   for(i=0;i<*dfx;i++){
      for(j=0;j<*dcx;j++){
         printf("Ingrese el valor (%d,%d): ",i+1,j+1);
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

void sumaPosiNega(int x[][MAX],int dfx, int dcx){
   int i,j,sumap=0,suman=0;
   for(i=0;i<dfx;i++){
      for(j=0;j<dcx;j++){
         if(x[i][j]>0){
            sumap=sumap+x[i][j];
         }
         if(x[i][j]<0){
            suman=suman+x[i][j];
         }
      }

   }
   printf("\nLa suma de positivos es %d\nLa suma de negativos es %d\n",sumap,suman);
}
