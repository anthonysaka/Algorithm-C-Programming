/*1. Si tenemos un arreglo de 10 valores, desarrolle 2 funciones, las cuales retornen el mayor valor del arreglo y otra que retorne el menor valor del arreglo.
El prototipo para estas funciones es:
	A. Para la función del mayor valor: long max(long valores)
	B. Para la función de menor valor: long min(long valores)*/


#include "stdio.h"

long cont;
long valores[10];
long numMayor,numMenor;

long max(long valores[10]);
long min(long valores[10]);

  int main() {

    for (cont=0;cont<10;cont++){
      printf("%2ld. %s Ingrese un numero: ",cont+1);
      scanf("%ld",&valores[cont] );
    }

 numMayor=max(valores);
 numMenor=min(valores);

printf("\n%s %ld\n", "El numero mayor es: " , numMayor);
printf("%s %ld\n", "El numero minimo es: " ,numMenor);

    return 0;
  }

////////////////FUNCIONA PARA MAYOR/////////////
long max(long valores[10]){
  long mayor=0;
  long limitador;

   for (limitador=0;limitador<10;limitador++){
      if ( valores[limitador] >= mayor ){
     mayor = valores[limitador];
   }
 }
 return mayor;
}
////////////////FUNCIONA PARA MENOR/////////////
 long min(long valores[10]){
   long menor;
   long limitador;

  for (limitador=0;limitador<10;limitador++){
   if (valores[limitador] < menor || limitador==1){
     menor=valores[limitador];
    }
 }
 return menor;
}
