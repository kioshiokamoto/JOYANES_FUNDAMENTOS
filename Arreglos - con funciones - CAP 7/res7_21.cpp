/*
 * nombrePrograma:
 * descripcion:
 *
 *Una empresa tiene diez almacenes y necesita crear
un algoritmo que lea las ventas mensuales de los diez
almacenes, calcular la media de ventas y obtener un
listado de los almacenes cuyas ventas mensuales son
superiores a la media.
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
void leerMatriz(int x[][MAX],int dfx,int dcx);
void mostrarMatriz(int x[][MAX],int dfx, int dcx);
void media(int x[][MAX],int dfx, int dcx,float *y);
void mayor(int x[][MAX],int dfx, int dcx, float y);

int main () {
   int a[MAX][MAX];
   int fa,ca;
   float m;
   crearMatriz(a,&fa,&ca);
   leerMatriz(a,fa,ca);
   mostrarMatriz(a,fa,ca);
   media(a,fa,ca,&m);
   mayor(a,fa,ca,m);

   system("pause");
   return(0);

}

void crearMatriz(int x[][MAX],int *dfx,int *dcx){
   *dfx=2;
   *dcx=3;
}

void leerMatriz(int x[][MAX],int dfx,int dcx){
   int i,j;
   printf("Datos la empresa \n");
   for(i=0;i<dfx;i++){
      printf("Datos de el almacen %d\n",i+1);
      for(j=0;j<dcx;j++){
         printf("Ingrese cantidad de ventas del dia %d: ",j+1);
         scanf("%d",&x[i][j]);
      }
      printf("\n");
   }
}

void mostrarMatriz(int x[][MAX],int dfx, int dcx){
   int i,j;
   for(i=0;i<dfx;i++){
      printf("Ventas de el almacen %d:\n<\t",i+1);
      for(j=0;j<dcx;j++){
         printf("%d\t",x[i][j]);
      }
      printf(">\n");
   }

}
void media(int x[][MAX],int dfx, int dcx,float *y){
   int i,j,cont=0;
   float media=0;
   for(i=0;i<dfx;i++){
      for(j=0;j<dcx;j++){
         media = media+x[i][j];
      }
   }
   media= media/(i*j);
   printf("\nLa media de ventas es %.2f\n",media);
   *y=media;
}

void mayor(int x[][MAX],int dfx, int dcx, float y){
   int i,j,cont;
   for(i=0;i<dfx;i++){
      cont =0;
      for(j=0;j<dcx;j++){
         if(x[i][j]>y){
            cont++;
         }
      }
      if(cont>j/2){
         printf("El almacen %d tiene ventas superiores a la media\n",i+1);
      }
   }
}
