/*
 * nombrePrograma:
 * descripcion:
 *Calcular la suma de los n primeros números enteros utilizando la estructura desde.
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
   int i,sum=0,n;
   char seguir;
   do{
      do{
         printf("Ingrese el maximo numero entero:");
         scanf("%d",&n);
      }while(n<1);
      printf("S = ");
      for(i=1;i<=n;i++){
         sum = sum +i;
         printf("%d",i);
         if(i<n){
            printf(" + ");
         }
      }
      printf(" = %d\n",sum);
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');


   system("pause");
   return(0);

}
