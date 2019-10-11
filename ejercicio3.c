/*Haga un programa que realice lo siguiente: capturar por pantalla un número N. Luego capturar por pantalla N números. Al finalizar la digitación de
 los N números, despliegue por pantalla la media de los números digitados, el mínimo y el máximo.*/

#include <stdio.h>

int numeros,limitador=1,cantidad;

 int main() {

   printf("%s\n","Digite la cantidad de numeros:" );
   scanf("%d",cantidad);
   
do {
  printf("%s\n","Digite un numero" );
} while(limitador<=cantidad);

   return 0;
 }
