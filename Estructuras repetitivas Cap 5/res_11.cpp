/*
 * nombrePrograma:
 * descripcion:
 *5.11 REPASO
 *
 *
 * autor:
 * fecha:
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main () {
   int i,n,k=1;
   float e=0,x,f=1,j=0;
   char seguir;
   do{
      printf("Ingrese el valor de x: ");
      scanf(" %f",&x);

      printf("ingrese la cantidad de factores: ");
      scanf(" %d",&n);


      printf("E(%.2f) = ",x);
      for(i=1;i<=n;i++,j++){
         while(k<=j){
            f=f*k;
            k++;
         }
         e=e+(pow(x,j))/f;
         if(j>0){
         printf("+");
         }
         printf("(%.f^%.f)/%.f!",x,j,j);
      }
      printf("\nE(%.2f) = %.2f",x,e);
      printf("\nDesea realizar otra operacion? (S:Seguir)");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S' );
   system("pause");
   return(0);

}



