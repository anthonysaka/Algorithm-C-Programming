#include <stdio.h>
#include <stdlib.h>

char *convertirString(double numero);

int main() {

double num;

printf("%s","Digite un numero: " );
scanf("%lf",&num);

printf("%s",convertirString(num));

  return 0;
}

char *convertirString(double numero){
  ////CICLO PARA SABER CANTIDAD DEL CHAR FINAL////
  double number=numero;
  int limitador,cont_grupo_tres=0;

  for (limitador=0;number>1;limitador++) {
    number=number/10;
  if (limitador%3==0) {
    cont_grupo_tres++;
  }
}
int  cantidad_char=limitador+cont_grupo_tres;

char cadena_numero[cantidad_char]; //arreglo para almacenar el numero convertido en cadena.
//////////
itoa(number,cadena_numero2,10);//CONVERTIR DE ENTERO A CHAR.

}
