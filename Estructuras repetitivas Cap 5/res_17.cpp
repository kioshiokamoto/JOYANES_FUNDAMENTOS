/*
 * nombrePrograma:
 * descripcion:
 *Dado un entero positivo n (> 1), comprobar si es
primo o compuesto.
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
   int num,cont=0,i;
   char seguir;
   do{
      do{
         printf("Ingrese el numero a evaluar: ");
         scanf("%d",&num);
      }while(num<=0);
      for(i=1;i<=num;i++){
         if(num%i==0){
            cont++;
         }
      }
      if(cont==2){
         printf("El numero %d es PRIMO\n",num);
      }
      else{
         printf("El numero %d NO es PRIMO\n",num);
      }
      printf("Desea evaluar otro numero? (S:Seguir) -> ");
      //getchar();
      scanf(" %c",&seguir);
   }while(seguir=='S'||seguir=='s');

   system("pause");
   return(0);

}
