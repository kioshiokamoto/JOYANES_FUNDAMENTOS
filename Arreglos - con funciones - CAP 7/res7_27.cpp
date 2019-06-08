/*
 * nombrePrograma:
 * descripcion:
 *
 *Se introducen una serie de valores numéricos desde
el teclado, siendo el valor final de entrada de datos
o centinela –99. Se desea calcular e imprimir el número
de valores leídos, la suma y media de los valores
y una tabla que muestre cada valor leído y sus
desviaciones de la media.
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define INICIO 100
using namespace std;
void crearVector(float x[],int *dx);
void leerVector(float x[], int *dx);
void mostrarVector(float x[], int dx);
void mediaVector(float x[], int dx, float *y);
void desviacion(float x[],int dx,float y);

int main () {
   float a[INICIO];
   int na;
   float s;
   crearVector(a,&na);
   leerVector(a,&na);
   mostrarVector(a,na);
   mediaVector(a,na,&s);
   desviacion(a,na,s);


   system("pause");
   return(0);

}

void crearVector(float x[],int *dx){
   *dx=-1;
}
void leerVector(float x[], int *dx)
{
   int i=0;
   float val;
   do{
      printf("Ingrese dato %d: ",i+1);
      scanf("%f", &val);
      if(val!=-99){
         x[i]=val;
         i++;
         *dx=i;

      }
   }while(val!=-99);

}

void mostrarVector(float x[], int dx){
   //RUTINA DE ESCRITURA
   int i;
   float val;
   if(dx>0){
      printf("Vector = < ");
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

void mediaVector(float x[], int dx, float *y){
   int i;
   float val,media,suma=0;
   if(dx>0){
      for(i=0;i<dx;i++){
         suma =suma+x[i];
      }
      media = suma/i;
      printf("La suma de los datos es: %.2f\n",suma);
      printf("La media de los datos es: %.2f\n",media);
      *y=media;
   }
   else{
      printf("Vector vacioooo...!\n");
   }

}

void desviacion(float x[],int dx,float y){
   int i;
   float resta=0,desviacion;
   for(i=0;i<dx;i++){
      resta=resta+pow((y-x[i]),2);
   }
   desviacion = (1.0*resta)/(i-1);
   desviacion = sqrt(desviacion);
   printf("La DESVIACION ES: %.2f\n",desviacion);
}

