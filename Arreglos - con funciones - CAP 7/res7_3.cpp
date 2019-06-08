/*
 * nombrePrograma:
 * descripcion:
 *Rellenar una matriz identidad de 4 por 4.
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define VECTOR 4

using namespace std;
void crearVector(int x[][VECTOR],int *dfx,int *dcx);
void identidad(int x[][VECTOR],int dfx, int dcx);
void mostrarVector(int x[][VECTOR],int dfx, int dcx);

int main () {
   int a[VECTOR][VECTOR];
   int fa,ca;
   crearVector(a,&fa,&ca);
   identidad(a,fa,ca);
   mostrarVector(a,fa,ca);


   system("pause");
   return(0);

}

void crearVector(int x[][VECTOR],int *dfx,int *dcx){
   *dfx=4;
   *dcx=4;
}
void identidad(int x[][VECTOR],int dfx, int dcx){
   int i,j;
   for(i=0;i<dfx;i++){
      for(j=0;j<dcx;j++){
         if(i==j){
            x[i][j]=1;
         }
         else{
            x[i][j]=0;
         }
      }
   }
}

void mostrarVector(int x[][VECTOR],int dfx, int dcx){
   int i,j;
   for(i=0;i<dfx;i++){
      for(j=0;j<dcx;j++){
         printf("%d\t",x[i][j]);
      }
      printf("\n");
   }
}
