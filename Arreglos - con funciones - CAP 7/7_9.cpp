/*
 * nombrePrograma:
 * descripcion:
 *Algoritmo que nos permita calcular la desviación
  estándar (SIGMA) de una lista de N números (N <= 15).
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define MAX 15
using namespace std;

void crearVector(int x[],int *dx);
void leerVector(int x[],int *dx);
void mostrarVector(int x[],int dx);
int promedio(int x[],int dx);
void desviacion(int x[],int dx);


int main () {
   int a[MAX];
   int na;
   crearVector(a,&na);
   leerVector(a,&na);
   mostrarVector(a,na);
   desviacion(a,na);


   system("pause");
   return(0);

}
void crearVector(int x[],int *dx){
   *dx=-1;
}
void leerVector(int x[],int *dx){
   int i,n;
   printf("Ingrese la cantidad de numeros: ");
   scanf("%d",&n);
   if(n>0 && n<=15){
      for(i=0;i<n;i++){
         printf("Ingrese el numero %d -> ",i+1);
         scanf("%d",&x[i]);
      }
      *dx=i;
   }
   else{
      printf("Fuera de rango");
   }
}
void mostrarVector(int x[],int dx){
   int i;
   if(dx>0){
      printf("Los valores del vector son:\n");
      for(i=0;i<dx;i++){
         printf("\tX[%d] = %d\n",i+1,x[i]);
      }
   }
   else{
      printf("Vector vacio");
   }
}

int promedio(int x[],int dx){
   int i;
   float promedio,suma=0;
   for(i=0;i<dx;i++){
      suma=suma+x[i];
   }
   promedio = (1.0*suma)/i;
   return(promedio);
}

void desviacion(int x[],int dx){
   int i;
   float resta=0,desviacion,media;
   media = promedio(x,dx);
   for(i=0;i<dx;i++){
      resta=resta+pow((media-x[i]),2);
   }
   desviacion = (1.0*resta)/(i-1);
   desviacion = sqrt(desviacion);
   printf("La DESVIACION ES: %.2f\n",desviacion);
}
