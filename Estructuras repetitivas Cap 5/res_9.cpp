/*
 * nombrePrograma:
 * descripcion:
 *Un comercio dispone de dos tipos de artículos en
fichas correspondientes a diversas sucursales con los
siguientes campos:
• código del artículo A o B,
• precio unitario del artículo,
• número de artículos.
La última ficha del archivo de artículos tiene un
código de artículo, una letra X. Se pide:
• el número de artículos existentes de cada categoría,
• el importe total de los artículos de cada categoría.
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

using namespace std;

int main () {
   int cantidada,cantidadb,sumaa=0,sumab=0,seguir;
   float precioa,preciob,importea,importeb;
   char categoria;
   do{
      do{
      printf("Introduzca la categoria (A o B): ");
      scanf(" %c",&categoria);

      }while(categoria != 'A' && categoria != 'a' && categoria != 'B' && categoria != 'b');
      if(categoria=='a'||categoria=='A'){
         printf("Introduzca el precio unitario del producto: ");
         scanf("%f",&precioa);
         printf("Introduzca la cantidad de articulos: ");
         scanf("%d",&cantidada);
         sumaa = sumaa+cantidada;
         importea=sumaa*precioa;

      }
      else{
         printf("Introduzca el precio unitario del producto: ");
         scanf("%f",&preciob);
         printf("Introduzca la cantidad de articulos: ");
         scanf("%d",&cantidadb);
         sumab = sumab+cantidadb;
         importeb=sumab*preciob;
      }
      printf("La cantidad de productos A es %d\n",sumaa);
      printf("El importe de productos A es %.2f\n",importea);
      printf("La cantidad de productos B es %d\n",sumab);
      printf("El importe de productos A es %.2f\n",importeb);
      printf("\nDesea realizar otro ingreso? (S->1): ");
      scanf(" %d",&seguir);
   }while(seguir==1);

   system("pause");
   return(0);

}
