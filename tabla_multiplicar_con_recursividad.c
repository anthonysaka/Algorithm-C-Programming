#include "stdio.h"



void tabla(long numero,int cont){

  if (cont>12){
    return;
  }
else{
  printf("%d X %d = %d\n", numero,cont, (numero*cont));

  tabla(numero,++cont);
}

}

int main() {

  long numero;

  printf("%s","Introduzca un numero: " );
  scanf("%ld",&numero);
  tabla(numero,1);

  return 0;
}
