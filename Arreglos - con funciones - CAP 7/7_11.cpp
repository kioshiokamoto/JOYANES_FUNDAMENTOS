/*
 * nombrePrograma:
 * descripcion:
 *Obtener un algoritmo que efectúe la multiplicación de dos matrices A, B.
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAXF 100
#define MAXC 100
using namespace std;

void crearMatriz(int x[][MAXC],int *dxf,int *dxc,int y[][MAXC],int *dyf, int *dyc);
void leerMatriz(int x[][MAXC],int *dxf,int *dxc,int y[][MAXC],int *dyf, int *dyc);
void mostrarMatrices(int x[][MAXC],int dxf,int dxc,int y[][MAXC],int dyf,int dyc);
void multiplicarMatrices(int x[][MAXC],int dxf,int dxc,int y[][MAXC],int dyf,int dyc,int z[][MAXC],int *dzf,int *dzc);
void mostrarproducto(int x[][MAXC],int dxf,int dxc);
int main () {
   int a[MAXF][MAXC],b[MAXF][MAXC],c[MAXF][MAXC];
   int fa,ca,fb,cb,fc,cc;
   crearMatriz(a,&fa,&ca,b,&fb,&cb);
   leerMatriz(a,&fa,&ca,b,&fb,&cb);
   mostrarMatrices(a,fa,ca,b,fb,cb);
   multiplicarMatrices(a,fa,ca,b,fb,cb,c,&fc,&cc);
   mostrarproducto(c,fc,cc);



   system("pause");
   return(0);

}

void crearMatriz(int x[][MAXC],int *dxf,int *dxc,int y[][MAXC],int *dyf, int *dyc){
   *dxf=-1;
   *dxc=-1;
   *dyf=-1;
   *dyc=-1;
}
void leerMatriz(int x[][MAXC],int *dxf,int *dxc,int y[][MAXC],int *dyf, int *dyc){
   int i,j,nf,nc,val;
   printf("Escriba la cantidad de filas: ");
   scanf("%d",&nf);
   printf("\nEscriba la cantidad de columnas: ");
   scanf("%d",&nc);
   if(nf<MAXF && nc<MAXC && nf>0 && nc>0) {
      printf("Ingrese valores para la primera matriz\n");
      for(i=0;i<nf;i++){
         for(j=0;j<nc;j++){

            printf("Escriba el valor para la posicion (%d,%d)",i+1,j+1);

               scanf("%d",&val);
               x[i][j]=val;

         }
      }
      *dxf=i;
      *dxc=j;
      printf("Ingrese valores para la segunda matriz\n");
      for(i=0;i<nf;i++){
         for(j=0;j<nc;j++){

            printf("Escriba el valor para la posicion (%d,%d)",i+1,j+1);

               scanf("%d",&val);
               y[i][j]=val;

         }
      }
      *dyf=i;
      *dyc=j;

   }
   else{
      printf("Dimensión fuera de rango");
   }
}
void mostrarMatrices(int x[][MAXC],int dxf,int dxc,int y[][MAXC],int dyf,int dyc){
   int i,j,val;
   if(dxf<MAXF && dxc<MAXC && dxf>0 && dxc>0 && dyf>0 && dyc>0) {
      printf("La primera matriz es: \n");
      for(i=0;i<dxf;i++){
         printf("|");
         for(j=0;j<dxc;j++){
            val=x[i][j];
            printf(" %d",val);
         }
         printf(" |");
         printf("\n");
      }
      printf("La segunda matriz es: \n");
      for(i=0;i<dyf;i++){
         printf("|");
         for(j=0;j<dyc;j++){
            val=y[i][j];
            printf(" %d",val);
         }
         printf(" |");
         printf("\n");
      }

   }
   else{
      printf("Vector vacio");
   }
}

void multiplicarMatrices(int x[][MAXC],int dxf,int dxc,int y[][MAXC],int dyf,int dyc,int z[][MAXC],int *dzf,int *dzc){
   int i,j,k;

   for (i=0;i<dxf;i++){
      for (j=0;j<dxc;j++){
         z[i][j]=0;
         for(k=0;k<dxc;k++){
            z[i][j]=(z[i][j]+(x[i][k]*y[k][j]));
         }
      }
   }
   *dzf=dxf;
   *dzc=dxc;

}
void mostrarproducto(int x[][MAXC],int dxf,int dxc){
   int i,j,val;
   if(dxf<MAXF && dxc<MAXC && dxf>0 && dxc>0) {
      printf("\nLa suma de las matrices es:\n");
      for(i=0;i<dxf;i++){
         printf("|");
         for(j=0;j<dxc;j++){
            val=x[i][j];
            printf(" %d",val);
         }
         printf(" |");
         printf("\n");
      }

   }
   else{
      printf("Vector vacio");
   }
}
