/*HAGA UN PROGRAMA AL CUAL SE LE DIGITE UN NUMERO ENTERO Y DESPLIEGUE POR PANTALLA LA SUMA DE LOS NUMEROS COMPRENDIDOS ENTRE 0 Y EL NUMERO DIGITADO*/

#include <stdio.h>

int numero,suma=0,limitador;

int main() {

   printf("%s\n","Digite el numero: " );
   scanf("%d", &numero);


   while (limitador<=numero) {
     suma=limitador+suma;
     limitador++;
   }

printf("\n%s %d\n","La suma es: " suma);
  return 0;
}
