/*
 * nombrePrograma:
 * descripcion: tabla de multiplicar
 *Bucles anidados. Las estructuras de control tipo bucles pueden anidarse internamente, es decir, se puede situar un
bucle en el interior de otro bucle.
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
   int i,j,mult;
   char seguir;
   do{
      for(i=1;i<=12;i++){
         printf("La tabla del %d es:\n",i);
         for(j=1;j<=12;j++){
            mult = i*j;
            printf("%d x %d = %d \n",i,j,mult);
         }
      }
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');
   system("pause");
   return(0);

}
