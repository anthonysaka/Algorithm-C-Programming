/*ESCRIBA UN PROGRAMA AL CUAL SE LE DIGITE UN NUMERO E IMPRIMA POR PANTALLA SU NOMBRE TANTAS VECES COMO LO INDQUE EL NUMERO DIGITADO*/

#include <stdio.h>

char nombre[20];
int numero,acumulador=1;

int main() {
  printf("%.25s","Introduzca su nombre: " );
  scanf("%s",&nombre );
  printf("%.50s","Introduzca un numero positvo entero: " );
  scanf("%d", &numero );
/////validacion numero postivo
 while (numero<0) {
    printf("%s\n","ERROR no se permiten numero negativos" );
    printf("%.50s","Introduzca un numero positvo entero: " );
    scanf("%d", &numero );

//////////////////////
    while (acumulador<=numero) {
      printf("\n%s\n",nombre );
acumulador++;
    }

  return 0;
}
}
