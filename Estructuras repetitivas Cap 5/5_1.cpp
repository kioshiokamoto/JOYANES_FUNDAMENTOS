/*
 * nombrePrograma:
 * descripcion:
 *Calcular el factorial de un número N utilizando la estructura desde.
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
   int i,fact=1,n;
   do{
      printf("Ingrese el numero del factorial:");
      scanf("%d",&n);
   }while(n<0);
   if(n>0){
      printf("%d! = ",n);
      for(i=1;i<=n;){
         fact = fact*n;
         printf("(%d)",n);
         n--;
         if(i<=n){
            printf(" * ");
         }
      }
      printf(" = %d\n",fact);
   }
   else{
      printf("El factorial %d! es 1\n",n);
   }
   system("pause");
   return(0);
}
