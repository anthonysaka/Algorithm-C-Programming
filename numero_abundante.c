#include <stdio.h>

int esdeficiente();

int num;

int main() {
 printf("%s ","Digite un numero: " );
 scanf("%d",&num );

 if(esabundante(num)==1){
   printf("%s %d %s\n","El numero",num,"es deficiente" );
 }
 else
 {
    printf("%s %d %s\n","El numero",num,"no es deficiente" );
 }
  return 0;
}

////////////////////FUNCION PARA EL NUMERO DEFICIENTE////////////////////
int esdeficiente(int numero){
  int limitador=1, sumatoria=0;

  while (limitador<n) {
    if (numero%limitador==0) {
      sumatoria=sumatoria+limitador;
    }
    printf("%d\n",limitador );
    limitador++;
  }
  if (sumatoria<numero) {
    return 1;
  }
  else{
  return 0;
}
}
