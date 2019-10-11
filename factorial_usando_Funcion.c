#include <stdio.h>

int n1;

long long factorialFuncion(int numero);

int main() {

  printf("%s\n","Digite el numero: " );
  scanf("%d", &n1);

  printf("%s %lld\n","El factorial es: ", factorialFuncion(n1));
}

//FUNCION PARA FACTORIAL RECURSIVA
long long factorialFuncion(int numero){
  while (numero>=0) {
  if (numero<=1){
  return 1;
}
  else{
    return (numero*factorialFuncion(numero-1)) ;
  }
}
}
