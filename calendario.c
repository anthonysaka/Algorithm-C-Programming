#include "stdio.h"

int calendario[5][7]= {
                      {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0},
                    };
char diaInicial;
int mes,indice=0,indiceSem,indiceDia,diaSemana=1, cantDiasMes;


int main() {

  printf("%s","Digite el dia de la semana que inicia el mes (L M X J V S D): " );
  scanf("%s",&diaInicial);
  printf("%s","Digite el numero del mes: ");
  scanf("%d",&mes);

if ((mes%2!=0 & mes<=7) || (mes%2==0 & mes>8)) {
  cantDiasMes=31;
}
else if (mes==2) {
  cantDiasMes=28;
}
else{
  cantDiasMes=30;
}

switch (diaInicial) {
  case  'L': indice=0;break;
  case  'M': indice=1;break;
  case  'X': indice=2;break;
  case  'J': indice=3;break;
  case  'V': indice=4;break;
  case  'S': indice=5;break;
  case  'D': indice=6;break;
  default: printf("%s\n","Dia invalido" );return 0;
}

for (indiceSem=0;indiceSem<=4;indiceSem++) {
  for (indiceDia=indice; indiceDia<=6;indiceDia++) {
    if (diaSemana<=cantDiasMes) {
      calendario[indiceSem][indiceDia]=diaSemana;
    }
  diaSemana++;
  }

indice=0;
}
/////////PARA IMPRIMIR////////////////////////////
printf("\n%s\n","   L   M   X   J   V   S   D");
for (indiceSem=0;indiceSem<=4;indiceSem++) {
  for (indiceDia=0; indiceDia<=6;indiceDia++) {
    if (calendario[indiceSem][indiceDia]>0) {
      printf("%4d",calendario[indiceSem][indiceDia] );
    }
    else{
      printf("%4c", ' ');
    }
}
printf("\n");
indice=0;
}
  return 0;
}
