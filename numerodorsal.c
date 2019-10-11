#include "stdio.h"
#include "math.h"

long numero,resultado;
int dorsal();

int main() {

  printf("%s\n","BIENVENIDOS A NUMEROS DORSALES" );
  printf("%s\n","Ingrese el numero: " );
  scanf("%ld",&numero );

while (numero<0) { ///////restringir numeros negativos
  printf("%s\n","No se permiten numero negativos" );
  printf("%s\n","Ingrese el numero: " );
  scanf("%ld",&numero );
}

 resultado=dorsal(numero);

while (resultado==1) {
   printf("%s %ld %s\n","El numero",numero,"es dorsal");
   return 0;
}
while (resultado==0) {
   printf("%s %ld %s\n","El numero",numero,"no es dorsal");
   return 0;
}
return 0;
}
////////////////////////FUNCION PARA DETERMINAR EL DORSAL/////////////////
int dorsal (int n){
  int uniCent,numDorsal,resul,num;
uniCent=n%100;
num=n/100;
numDorsal= pow(num,2)+pow(uniCent,2);
while (numDorsal==n) {
  return 1;
}
while (numDorsal!=n) {
  return 0;
}
}
