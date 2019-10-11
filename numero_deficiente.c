#include <stdio.h>

int esdeficiente(int numero);

int num,limitarnumeros=10;

int main() {
///////////////BLOQUE DE CODIGO PARA MOSTRAR NUMEROS DEFICIENTES ENTRE 10 y 200///////////////
printf("%s\n\n","Este programa programa muestra los numeros deficientes comprendidos entre 10 y 200." );

 while(limitarnumeros <= 200)
 {
     if (esdeficiente(limitarnumeros)==1)
     {
         printf("%d\n", limitarnumeros);
     }
     limitarnumeros++;
 }
  return 0;
}
////////////////////FUNCION PARA EL NUMERO DEFICIENTE////////////////////
int esdeficiente(int numero){
  int limitador=1, sumatoria=0;

  while (limitador<numero) {
    if (numero%limitador==0) {
      sumatoria=sumatoria+limitador;
    }
    limitador++;
  }
  if (sumatoria<numero) {
    return 1;
  }
  else{
  return 0;
}
}
