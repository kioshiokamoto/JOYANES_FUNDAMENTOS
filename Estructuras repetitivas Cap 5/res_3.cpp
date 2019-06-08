/*
 * nombrePrograma:
 * descripcion:
 *Sumar los números enteros de 1 a 100 mediante: a)
estructura repetir; b) estructura mientras; c) estructura
desde.
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
   /* ESTRUCTURA REPETIR HASTA
   int suma=0,i=1;
   do{
      suma = suma + i;
      i++;
   }while(i<=100);
   printf("%d\n",suma);
   */
   /* ESTRUCTURA MIENTRAS
   int i=1,suma=0;
   while(i<=100){
      suma = suma+i;
      i++;
   }
   printf("%d\n",suma);
   */
   /* ESTRUCTURA DESDE
   int i,suma=0;
   for(i=1;i<=100;i++){
      suma= suma+i;
   }
   printf("%d\n",suma);
   */
   system("pause");
   return(0);

}
