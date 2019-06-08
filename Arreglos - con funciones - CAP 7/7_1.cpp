/*
 * nombrePrograma:
 * descripcion:
 *Escribir un algoritmo que permita calcular el cuadrado de los cien primeros números enteros y a continuación escribir
una tabla que contenga dichos cien números cuadrados.
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
void operacionVector(int x[], int dx);
void mostrarVector(int x[], int dx);

int main () {
   int na;
   int a[MAX];
   crearVector(a,&na);
   operacionVector(a,na);
   mostrarVector(a,na);


   system("pause");
   return(0);

}

void crearVector(int x[],int *dx){
   *dx=100;
}
void operacionVector(int x[], int dx){
   int i;
   for(i=1;i<dx;i++){
      x[i]=i*i;
   }
}
void mostrarVector(int x[], int dx){
   int i;
   for(i=1;i<=dx;i++){
      printf("T[%d] = %d*%d = %d \n",i,i,i,x[i]);
   }
}
