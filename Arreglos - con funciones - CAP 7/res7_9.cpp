/*
 * nombrePrograma:
 * descripcion:
 *Se dispone de una lista (vector) de N elementos. Se
desea diseñar un algoritmo que permita insertar el
valor x en el lugar k-ésimo de la mencionada lista.
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

void crearVector(int x[], int *dx);
void leerVector(int x[], int *dx);
void mostrarVector(int x[], int dx);
void insertarxPos(int x[], int *dx);

int main () {
   int a[MAX];
   int na;
   crearVector(a,&na);
   leerVector(a,&na);
   mostrarVector(a,na);
   insertarxPos(a,&na);



   system("pause");
   return(0);

}

void crearVector(int x[], int *dx)
{
   *dx=-1;
}
void leerVector(int x[], int *dx)
{
   int i, n, val;
   printf("Ingrese la cantidad de datos: ");
   scanf("%d", &n);
   if(n<MAX){
      for(i=0;i<n;){
         printf("Ingrese dato %d: ",i+1);
         scanf("%d", &val);
         x[i]=val;
         i=i+1;
      }
      *dx=i;//Actualizac de la dimension
   }
   else{
      printf("Diemnsion fuera de RANGO ...");
   }
}
void mostrarVector(int x[], int dx){
   //RUTINA DE ESCRITURA
   int i, val;
   if(dx>0){
      printf("vector = < ");
      for(i=0;i<dx;){
         val=x[i];
         printf("%d ", val);
         i=i+1;
      }
      printf(">\n");
   }
   else{
      printf("Vector vacioooo...!\n");
   }
}

void insertarxPos(int x[], int *dx)
{
   int i, n;
   int posi,dato;
   n = *dx;
   n = n + 1;//
   i = *dx;
   printf("Ingrese la posicion a insertar dato: ");
   scanf("%d",&posi);
   if(n<MAX){
      if(posi-1>-1 && posi-1<*dx){
         printf("Ingrese dato a ingresar: ");
         scanf("%d",&dato);
         *dx=n;
         while(i>posi-1){
            x[i] = x[i-1];
            i = i-1;
         }
         x[posi-1]=dato;
         printf("\nDato %d  INSERTADO en posicion %d \n\n ", dato, posi);
         mostrarVector(x, *dx);
      }
      else{
         printf("La posicion %d no existe en el vector...\n", posi);
      }
   }
   else{
      printf("Dimension fuera de rango ...\n");
      system("pause");
   }
}
