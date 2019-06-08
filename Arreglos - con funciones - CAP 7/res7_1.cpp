/*
 * nombrePrograma:
 * descripcion:
 *Determinar los valores de I, J, después de la ejecución
de las instrucciones siguientes:
var
entero : I, J
array[1..10] de entero : A
inicio
I ← 1
J ← 2
A[I] ← J
A[J] ← I
A[J+I] ← I + J
I ← A[I] + A[J]
A[3] ← 5
J ← A[I] - A[J]
fin
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
   int i,j;
   int a[10];
   i=1;
   j=2;
   a[i]=j;
   a[j]=i;
   a[j+i]=i+j;
   i=a[i]+a[j];
   a[3]=5;
   j=a[i]-a[j];
   printf("I: %d\nJ: %d\n",i,j);


   system("pause");
   return(0);

}
