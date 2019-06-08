/*
 * nombrePrograma:
 * descripcion:
 *Cada alumno de una clase de licenciatura en Ciencias
de la Computación tiene notas correspondientes
a ocho asignaturas diferentes, pudiendo no tener
califica ción en alguna asignatura. A cada asignatura
le corresponde un determinado coeficiente. Escribir
un algoritmo que permita calcular la media de cada
alumno.
Modificar el algoritmo para obtener las siguientes
medias:
• general de la clase
• de la clase en cada asignatura
• porcenaje de faltas (no presentado a examen)
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

void crearMatriz(int x[][MAX],int *dfx,int *dcx);
void leerMatriz(int x[][MAX],int dfx,int *dcx);
void mostrarMatriz(int x[][MAX],int dfx, int dcx);
void promGen(int x[][MAX],int dfx,int dcx);
void promCurso(int x[][MAX],int dfx,int dcx);
void faltas(int x[][MAX],int dfx,int dcx);

int main () {
   int a[MAX][MAX];
   int fa,ca;
   crearMatriz(a,&fa,&ca);
   leerMatriz(a,fa,&ca);
   mostrarMatriz(a,fa,ca);
   //promGen(a,fa,ca);
   //promCurso(a,fa,ca);
   faltas(a,fa,ca);





   system("pause");
   return(0);

}

void crearMatriz(int x[][MAX],int *dfx,int *dcx){
   *dfx=3;
   *dcx=-1;
}

void leerMatriz(int x[][MAX],int dfx,int *dcx){
   int i,j,cant;
   printf("Ingrese cantidad de alumnos de la clase: ");
   scanf("%d",&cant);
   if(cant>0){
      *dcx=cant;
      printf("Datos la clase \n");
      for(i=0;i<dfx;i++){
         printf("Notas del curso %d\n",i+1);
         for(j=0;j<*dcx;j++){
            do{
               printf("Ingrese la nota %d: ",j+1);
               scanf("%d",&x[i][j]);
            }while(x[i][j]>20 && x[i][j]<0);
         }
         printf("\n");
      }
   }
   else{
      printf("Cantidad de alumnos inválida");
   }

}

void mostrarMatriz(int x[][MAX],int dfx, int dcx){
   int i,j;
   if(dcx>0){
      for(i=0;i<dfx;i++){
         printf("Notas de curso %d: ",i+1);
         for(j=0;j<dcx;j++){
            printf("%d\t",x[i][j]);
         }
         printf("\n");
      }
   }
   else{
      printf("No existen alumnos");
   }
}

void promGen(int x[][MAX],int dfx,int dcx){
   int i,j;
   float prom=0;
   if(dcx>0){
      for(i=0;i<dfx;i++){
         for(j=0;j<dcx;j++){
         prom = prom + x[i][j];
         }
      }
      prom = prom/(i*j);
      printf("La media de la clase es: %.2f",prom);

   }
   else{
      printf("No existen alumnos");
   }
}

void promCurso(int x[][MAX],int dfx,int dcx){
   int i,j;
   float prom;
   if(dcx>0){
      for(i=0;i<dfx;i++){
         prom=0;
         for(j=0;j<dcx;j++){
         prom = prom + x[i][j];
         }
         prom = prom/(j);
         printf("La media de la clase para el curso %d es: %.2f\n",i+1,prom);
      }

   }
   else{
      printf("No existen alumnos");
   }
}

void faltas(int x[][MAX],int dfx,int dcx){
   int i,j,cont=0;
   float porcentaje;
   if(dcx>0){
      for(i=0;i<dfx;i++){
         for(j=0;j<dcx;j++){
            if(x[i][j]==0){
               cont++;
            }
         }
      }
      porcentaje=((1.0)*cont/(i*j))*100;
      printf("Hubo un %.2f%s de faltas\n",porcentaje,"%");
   }
   else{
      printf("No existen alumnos");
   }
}

