

#include <stdio.h>

long contDigitos();

int main() {

  long numero,numero_print;

printf("%s","Introduzca un numero: " );
scanf("%d",&numero);

numero_print=numero;
contDigitos(numero);//llamando funcion

printf("\n%s %lld %s %lld %s \n","El numero",numero_print,"tiene",contDigitos(numero),"digitos pares" );
  return 0;
}
/////////FUNCION PARA DETERMINAR DIGITOS////////////

 long long contDigitos (int num){

long long limitador=0;
   while (num>0) {
      num=num/10;
      limitador++;
     }
 return limitador;
 }
