/*
 * nombrePrograma:
 * descripcion:
 *Dados dos números enteros, realizar el algoritmo que calcule su cociente y su resto.
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
   int div,divisor,cociente=0,residuo;
   char seguir;
   do{
      do{
      printf("Ingrese el dividendo:");
      scanf("%d",&div);
      printf("Ingrese el divisor:");
      scanf("%d",&divisor);
      }while(divisor>div);
      printf("El resultado de %d entre %d ",div,divisor);
      while(div>=divisor){
         div = div-divisor;
         residuo = div;
         cociente++;
      }
      printf("tiene como cociente %d y como residuo %d\n",cociente,residuo);
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');
   system("pause");
   return(0);

}
