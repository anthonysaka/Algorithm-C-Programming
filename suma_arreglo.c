/*Desarrolle una función que utilizando un arreglo de 10 elementos como parámetro, retorne la suma de todos los valores de dicho vector.
	El prototipo a utilizar es: long sumaVector(long valores[10])*/


#include "stdio.h"

long sumaVector();

long cont;
long valores[10];

int main() {

  for (cont=0;cont<10;cont++){
    printf("%2ld. %s Ingrese un numero: ",cont+1);
    scanf("%ld",&valores[cont] );
  }

sumaVector(valores);

printf("\n%s %ld\n","La suma de los valores es: ",sumaVector(valores));
  return 0;
}
//////////////FUNCION PARA SUMAR LOS VALORES DEL ARREGLO///////////////////////
long sumaVector(long valores[10]){
  long limitador;
 long suma=0;
   for (limitador=0;limitador<10;limitador++){
     suma+= valores[limitador];
   }
 return suma;
}
