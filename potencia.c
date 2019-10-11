#include <stdio.h>
#include <stdlib.h>

long potencia (int base, int exponente){
  long resultado=1;
  int contador;
  for(contador=1;contador<=exponente;contador++)
  {
    resultado*=base;
  }
  return resultado;
}

int main() {
  int bas,expon;
  long res;

  printf("introduzca base: ");
  scanf("%d", &bas);

  printf("introduzca exponente: ");
  scanf("%d", &expon);

  res=potencia(bas,expon);
  printf("%ld^%ld=%ld",bas,expon,res);

  return 0;
}
