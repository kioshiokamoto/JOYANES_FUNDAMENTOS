/*
 * nombrePrograma:
 * descripcion:
 *Se dispone de N temperaturas almacenadas en un
array. Se desea calcular su media y obtener el número
de temperaturas mayores o iguales que la media.
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define INICIO 100
using namespace std;
void crearVector(float x[],int *dx);
void leerVector(float x[], int *dx);
void mostrarVector(float x[], int dx);
void mediaMayor(float x[], int dx);


int main () {
   float a[INICIO];
   int na;
   crearVector(a,&na);
   leerVector(a,&na);
   mostrarVector(a,na);
   mediaMayor(a,na);


   system("pause");
   return(0);

}

void crearVector(float x[],int *dx){
   *dx=-1;
}
void leerVector(float x[], int *dx)
{
   int i, n;
   float val;
   printf("Ingrese la cantidad de datos: ");
   scanf("%d", &n);
   if(n>0){
      for(i=0;i<n;i++){
         printf("Ingrese dato %d: ",i+1);
         scanf("%f", &val);
         x[i]=val;

      }
      *dx=i;
   }
   else{
      printf("Diemnsion fuera de RANGO ...");
   }
}

void mostrarVector(float x[], int dx){
   //RUTINA DE ESCRITURA
   int i;
   float val;
   if(dx>0){
      printf("Temperaturas = < ");
      for(i=0;i<dx;i++){
         val=x[i];
         printf("%.2f ", val);

      }
      printf(">\n");
   }
   else{
      printf("Vector vacioooo...!\n");
   }
}

void mediaMayor(float x[], int dx){
   int i,cont=0;
   float media=0;
   if(dx>0){
      for(i=0;i<dx;i++){
         media = media + x[i];
      }
      media = media/i;
      for(i=0;i<dx;i++){
         if(x[i]>=media){
            cont++;
         }
      }
      printf("\nLa media de temperaturas es es %.2f\n",media);
      printf("Existen %d temperaturas mayores a la media\n",cont);
   }
   else{
      printf("Vector vacioooo...!\n");
   }
}
