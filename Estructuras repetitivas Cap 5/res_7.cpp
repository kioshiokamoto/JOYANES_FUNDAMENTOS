/*
 * nombrePrograma:
 * descripcion:
 *Leer las notas de una clase de informática y deducir
todas aquellas que son NOTABLES (>= 7 y < 9).
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
#define MAX 20

using namespace std;

int main () {
   int nota,i=1;
   char seguir;
   do{
      printf("\nIngrese nota %d: ",i);
      scanf("%d",&nota);
      if(nota>=7 && nota <9){
         printf("La nota %d es NOTABLE\n" ,i);
      }
      i++;
      printf("\nDesea ingresar otra nota? (S:Seguir) ");
      scanf(" %c",&seguir);
   }while(seguir == 'S' || seguir =='s');


   system("pause");
   return(0);

}
