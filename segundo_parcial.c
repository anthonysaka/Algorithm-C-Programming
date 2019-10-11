#include "stdio.h"


float obtenerMenorNota(float notas[15]);

int main(){

  float notas[15],MostrarMenorNota;
  int cont;

for (cont=0;cont<15;cont++) {
  printf("%2d. Digite la nota: ",cont+1);
  scanf("%f",&notas[cont]);
}

MostrarMenorNota=obtenerMenorNota(notas);//////VARIABLE PARA ALMACENAR VALOR RETORNADO POR LA FUNCION//////

printf("\n%s %.1f\n","La menor nota es: ",MostrarMenorNota);

return 0;
}

////////////FUNCION RETORNAR MENOR  NOTA////////////////
float obtenerMenorNota(float notas[15]){
  float NotaMenor;
  int limitador;

  for (limitador=0;limitador<15;limitador++){
   if (notas[limitador] < NotaMenor || limitador==0){
    NotaMenor=notas[limitador];
    }
 }
 return NotaMenor;
}
