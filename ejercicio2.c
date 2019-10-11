
#include "stdio.h"

int dividendo,divisor,cociente=0,residuo;
char simbolo;

int main() {

    printf("%s","Digite la division: " );
    scanf("%d%c%d",&dividendo,&simbolo,&divisor);

  while (simbolo!='/') {
    printf("%s\n","ERROR debe utilizar /");
    printf("%s","Digite la división nuevamente: " );
    scanf("%d%c%d",&dividendo,&simbolo,&divisor);
  }

residuo=dividendo;

  while (residuo>=divisor) {
      residuo-=divisor;
      cociente++;
    }

  printf("%s %d \n","El cociente es:",cociente);
  printf("%s %d\n", "El residuo es:",residuo);
  return 0;
}
