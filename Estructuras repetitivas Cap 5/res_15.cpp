/*
 * nombrePrograma:
 * descripcion:
 *Se desea conocer una serie de datos de una empresa
con 50 empleados: a) ¿Cuántos empleados ganan
más de 300.000 pesetas al mes (salarios altos); b)
entre 100.000 y 300.000 pesetas (salarios medios);
y c) menos de 100.000 pesetas (salarios bajos y empleados
a tiempo parcial)?
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
   int sueldo,sAlto=0,sMedio=0,sBajo=0,trabajador=1;
   char seguir;
   do{
      while(trabajador<=50){
         do{
         printf("Ingrese sueldo de trabajador %d -> ",trabajador);
         scanf("%d",&sueldo);
         }while(sueldo<=0);
         if(sueldo>300000){
            sAlto++;
         }
         if(sueldo>100000 && sueldo<300000){
            sMedio++;
         }
         if(sueldo<100000){
            sBajo++;
         }
         trabajador++;
      }
      printf("Se tienen %d trabajadores con sueldo alto\n",sAlto);
      printf("Se tienen %d trabajadores con sueldo medio\n",sMedio);
      printf("Se tienen %d trabajadores con sueldo bajo\n",sBajo);
      printf("Desea realizar otra operacion? (S:seguir):");
      scanf(" %c",&seguir);
   }while(seguir=='s'||seguir=='S');

   system("pause");
   return(0);

}
