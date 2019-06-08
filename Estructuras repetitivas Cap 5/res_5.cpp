/*
 * nombrePrograma:
 * descripcion:
 *Imprimir todos los números primos entre 2 y 1.000
inclusive.
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
   int primo,cont=0;
   int i,j;
   char seguir;
   do{
      for(i=2;i<=1000;i++){

         for(j=1;j<=1000;j++){
            if(i%j==0){
               cont++;
            }
         }
         if(cont==2){
            printf("El numero %d es primo \n",i);
         }
         cont=0;

      }
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');

   system("pause");
   return(0);

}
