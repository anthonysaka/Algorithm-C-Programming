#include <stdio.h>

int n1, n2;
int mcm();
int main() {

  printf("%s\n\n","Determine el MCM de dos numeros enteros" );
  printf("%s\n","Ingrese el primer numero: " );
  scanf("%d",&n1);
  printf("%s\n","Ingrese el segundo numero: " );
  scanf("%d",&n2);

mcm(n1,n2);
  printf("\n%s %d\n","El MCM es ", mcm(n1,n2) );
  return 0;
}
//////////////////////////////FUNCION PARA MCM/////////////////////////////
int mcm(int num1, int num2){
  int limitador=1;

  while (limitador>0) {
      if (limitador%num1==0 & limitador%num2==0) {
         return limitador;
        }
    else {
      limitador++;
    }
  }
}
