/*
 * nombrePrograma:
 * descripcion:
 *Escribir un algoritmo que permita escribir en una pantalla la frase ‘¿Desea continuar? S/N’ hasta que la respuesta
sea 'S' o 'N'.
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
   char respuesta;
   do{
      printf("Desea continuar? S/N");
      scanf(" %c",&respuesta);
      //getchar();
   }while(respuesta !='N' && respuesta !='S');


   system("pause");
   return(0);

}
