#include <stdio.h>
#include <stdlib.h>

float nota;
int main() {

denuevo:
  printf("%s\n","Digite la nota:" );
  scanf("%f",&nota );

  while (nota>100 | nota<0){
  printf("%s\n","ERROR NOTA INVALIDA" );
  goto denuevo;
  }
  system("clear");

  if (nota>= 90 && nota<=100) {
    printf("%s\n","A ---> MUY BUENO" );
  }
  else if (nota>= 80 && nota<90) {
    printf("%s\n","B ---> BUENO" );
  }
  else if (nota>=70 && nota<80) {
    printf("%s\n","C ---> REGULAR" );
  }
  else if (nota>=60 && nota<70) {
    printf("%s\n","D ---> MALO" );
  }
  else if (nota>=0 && nota<60){
  printf("%s\n","F ---> REPROBADO" );
  }
}
