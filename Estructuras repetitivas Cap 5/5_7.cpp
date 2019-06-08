/*
 * nombrePrograma:
 * descripcion:
 *Buscar y escribir la primera vocal leída del teclado.
 (Se supone que se leen, uno a uno, caracteres desde el teclado.)
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
   char vocal,seguir;
   do{
      do{
         printf("Ingrese una vocal");
         scanf("%c",&vocal);
      }while(vocal != 'a' && vocal != 'e' && vocal != 'i' && vocal != 'o' && vocal != 'u' );
      printf("Primera vocal %c\n",vocal);
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');

   system("pause");
   return(0);

}
