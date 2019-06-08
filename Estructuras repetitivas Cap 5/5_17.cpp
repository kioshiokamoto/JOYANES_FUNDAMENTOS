/*
 * nombrePrograma:
 * descripcion:
 *Detección de entradas numéricas —enteros— erróneas.
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main () {
   float n;
   int n2;
   int interruptor=0;
   char seguir;
   do{
      do{
         printf("Introdusca un entero: ");
         scanf("%f",&n);
         n2 = (int)n;
         if(n - n2){
            printf("Dato no valido\n");


         }
         else{
            printf("Correcto, %d es entero\n",n2);
            interruptor=1;
         }
      }while(interruptor=0);
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');


   system("pause");
   return(0);

}
