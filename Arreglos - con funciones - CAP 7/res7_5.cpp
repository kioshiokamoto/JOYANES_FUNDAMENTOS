/*
 * nombrePrograma:
 * descripcion:
 *Cálculo de la suma de todos los elementos de un vector,
así como la media aritmética.
 *
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
void crearVector(int x[],int *dx);
void leerVector(int x[],int *dx);
void mostrarVector(int x[],int dx);
void mediaVector(int x[],int dx);

int main () {
   int a[MAX];
   int na;
   crearVector(a,&na);
   leerVector(a,&na);
   mostrarVector(a,na);
   mediaVector(a,na);



   system("pause");
   return(0);

}
void crearVector(int x[],int *dx){
   *dx=-1;
}

void leerVector(int x[],int *dx){
   int i,n;
   printf("Cantidad de numeros a promediar: ");
   scanf("%d",&n);
   if(n>0){
      for(i=0;i<n;i++){
         printf("Ingresar valor %d: ",i+1);
         scanf("%d",&x[i]);
      }
      printf("\n");
      *dx = n;
   }
   else{
      printf("Fuera de rango\n");
   }

}

void mostrarVector(int x[],int dx){
   int i;
   if(dx>0){
      for(i=0;i<dx;i++){
         printf("%d\t",x[i]);
      }
      printf("\n\n");
   }
   else{
      printf("Vector vacio\n");
   }
}

void mediaVector(int x[],int dx){
   int i;
   float prom=0;
   if(dx>0){
      for(i=0;i<dx;i++){
         prom = prom + x[i];
      }
      prom = prom/i;
      printf("El promedio de %d numeros es: %.2f\n",i,prom);

   }
   else{
      printf("Vector Vacio\n");
   }
}

