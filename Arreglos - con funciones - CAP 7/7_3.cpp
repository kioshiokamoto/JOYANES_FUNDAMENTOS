/*
 * nombrePrograma:
 * descripcion:
 *Escribir el algoritmo que permita sumar
  el número de elementos positivos y el de negativos de una tabla T.
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define NUM 100

using namespace std;
void crearVector(int x[],int *dx);
void leerVector(int x[], int *dx);
void sumarPosiNega(int x[], int dx,int *sum, int *rest);
void mostrarresultados(int x, int y);
int main () {
   int a[NUM];
   int na,sum,res;
   crearVector(a,&na);
   leerVector(a,&na);
   sumarPosiNega(a,na,&sum,&res);
   mostrarresultados(sum,res);



   system("pause");
   return(0);

}

void crearVector(int x[],int *dx){
   *dx=-1;
}
void leerVector(int x[], int *dx){
   int i=0,val;
   char s;
   do{
      printf("Ingrese el numero %d -> ",i+1);
      scanf("%d",&val);
      x[i]=val;
      i++;
      printf("Desea ingresar otro numero? (s:seguir)");
      scanf(" %c",&s);
   }while(s=='s'||s=='S');
   *dx=i;
}
void sumarPosiNega(int x[], int dx,int *sum, int *rest){
   int i,posi=0,nega=0;
   for(i=0;i<dx;i++){
      if(x[i]>0){
         posi = posi+x[i];
      }
      else{
         nega = nega + x[i];
      }
   }
   *sum=posi;
   *rest=nega;
}
void mostrarresultados(int x, int y){
   printf("La suma de positivos es %d\n",x);
   printf("La suma de negativos es %d\n",y);

}
