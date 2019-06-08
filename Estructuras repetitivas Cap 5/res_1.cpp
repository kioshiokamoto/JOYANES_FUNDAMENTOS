/*
 * nombrePrograma:
 * descripcion:
 *Determinar la media de una lista indefinida de números
positivos, terminados con un número negativo.
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
   int suma=0,cont=0;
   float media,num;
   char seguir;
   do{
      do{
         printf("Ingrese un numero a sumar: ");
         scanf("%f",&num);
         if(num>0){
         suma = suma+num;
         cont++;
         }
      }while(num>0);
      media=(float)suma/cont;
      printf("La media de %d numeros es: %.2f\n",cont,media);
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');


   system("pause");
   return(0);

}
