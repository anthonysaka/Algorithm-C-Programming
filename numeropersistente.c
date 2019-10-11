#include <stdio.h>
#include <stdlib.h>

int num,num1,digito, muldigitos=1,persistencia;

int main() {

     printf("%s\n","Digite una cantidad que tenga menos de 10 digitos: " );
     scanf("%d",&num);
num1=num;
     while (num1<0 || num1>999999999) {
       printf("%s\n","ERROR" );
       return 0;
     }

     while (num1<10 && num1>=0) {
       printf("%s\n","La persistencia es: 0" );
       return 0;
     }

     while (num1>9) {

    muldigitos=1;
       while (num1>0) {
       digito=num1%10;
       muldigitos=muldigitos*digito;
       num1=num1/10;
     }
     persistencia++;
     num1=muldigitos;
   }

 printf("\n%d %s %d",num,"Tiene una persitencia de",persistencia );

  return 0;
}
