/*
 * nombrePrograma:
 * descripcion:
 *Se pretende leer todos los empleados de una empresa
—situados en un archivo EMPRESA— y a la terminación
de la lectura del archivo se debe visualizar
un mensaje «existen trabajadores mayores de 65
años en un número de ...» y el número de trabajadores
mayores de 65 años.
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
#define MAX 100
using namespace std;

int main () {
   char nombre[MAX];
   char seguir;
   int edad,i=0,j=1;
   do{
      printf("\nIngrese el nombre del trabajador %d -> ",j);
      gets(nombre);

      printf("Ingrese la edad del trabajador %s: ",nombre);
      scanf(" %d",&edad);
      if(edad>65){
         i++;
      }
      printf("\nDesea seguir? (S:seguir): ");
      scanf(" %c",&seguir);
      getchar();
   }while(seguir=='S'||seguir=='s');
   printf("En la empresa existen trabajadores con edad mayor a 65 en un numero de %d \n",i);

   system("pause");
   return(0);

}
