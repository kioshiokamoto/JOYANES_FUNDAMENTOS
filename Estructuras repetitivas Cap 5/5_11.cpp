/*
 * nombrePrograma:
 * descripcion:
 *
 *Calcular el factorial de un número n con métodos diferentes al Ejercicio 5.1.
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
   int i=0,fact=1,n;
   char seguir;
   do{
      do{
         printf("Ingrese el numero del factorial:");
         scanf("%d",&n);
      }while(n<0);
      if(n>0){
         printf("%d! = ",n);
         while(i<n){
            fact = fact*n;
            printf("(%d)",n);
            n--;
            if(i<n){
               printf(" * ");
            }
         }
         printf(" %d\n",fact);

      }
      else{
         printf("El factorial %d! es 1",n);
      }
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');

   system("pause");
   return(0);

}
