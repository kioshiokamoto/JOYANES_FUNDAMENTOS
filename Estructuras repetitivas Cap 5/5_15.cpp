/*
 * nombrePrograma:
 * descripcion:
 *Determinar simultáneamente los valores máximo y mínimo de una lista de 100 números.
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

int main () {
   int numero,mini,maxi,i;
   char seguir;
   do{
      printf("Ingrese el numero");
      scanf("%d",&numero);
      mini = numero;
      maxi = numero;
      for(i=0;i<99;i++){
         printf("Ingrese el numero");
         scanf("%d",&numero);
         if(numero>maxi){
            maxi = numero;
         }
         if(numero<mini){
            mini = numero;
         }

      }
      printf("El maximo numero es: %d\n",maxi);
      printf("El minimo numero es: %d\n",mini);
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');

   system("pause");
   return(0);

}
