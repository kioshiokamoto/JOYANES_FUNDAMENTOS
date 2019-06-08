/*
 * nombrePrograma:
 * descripcion:
 *Realizar la búsqueda de un determinado nombre en una lista de nombres, de modo que el algoritmo imprima los
siguientes mensajes según el resultado:
'Nombre encontrado' si el nombre está en la lista
'Nombre no existe' si el nombre no está en la lista
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAXN 100
#define NOMBRE 100
using namespace std;

void ingresoNombres(char x[][NOMBRE],int *nf);
void mostrarNombres(char x[][NOMBRE],int nf);
void buscarNombre(char [][NOMBRE],int nf);
void encabezado();
void raya();

int main () {
   char a[MAXN][NOMBRE];
   int nf;
   ingresoNombres(a,&nf);
   mostrarNombres(a,nf);
   buscarNombre(a,nf);

   system("pause");
   return(0);

}
void ingresoNombres(char x[][NOMBRE],int *nf){
   int i,n;
   char nombre[NOMBRE];
   printf("Ingrese la cantidad de nombres a ingresar: ");
   scanf(" %d",&n);
   getchar();
   *nf=n;
   for(i=0;i<n;i++){
      printf("Ingrese el nombre %d -> ",i+1);
      gets(nombre);
      getchar;
      strcpy(x[i],nombre);
   }
}

void mostrarNombres(char x[][NOMBRE],int nf){
   int i;
   encabezado();
   for(i=0;i<nf;i++){
      printf("%d\t%s\n",i+1,x[i]);
   }
}

void encabezado(){
   system("cls");
   char nombre[]="NOMBRE";
   char numero[]="NRO";
   printf("\n\n%s\t%2s",numero,nombre);
   raya();
}

void raya(){
   printf("\n---------------\n");
}

void buscarNombre(char x[][NOMBRE],int nf){
   int i,cont=0;
   char nombre[NOMBRE];
   printf("\nIngrese el nombre a buscar: ");
   gets(nombre);
   for(i=0;i<nf;i++){
      if(strcmp(x[i],nombre)==0){
         printf("\nNombre encontrado\n");
      }
      else{
         cont++;
      }
   }
   if(cont==nf){
      printf("\nNombre no existe\n\n");
   }
}

