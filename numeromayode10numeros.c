#include <stdio.h>
#include <stdlib.h>

float  menor, total_suma=0,
              numero,mayor=0;
int limitador=1;
char reinicio;

  //FUNCION DEL FUNCIONAMIENTO DEL PROGRAMA
        int principal_bloque()
{
 printf("%s\n","Digite un numero:");
           scanf( "%f", &numero );
            while (numero<0) {
              printf("%s\n","No puede ser negativo" );
              return 0;
            }
                if ( numero >= mayor ){
                   mayor = numero;
                 }
                if (numero < menor || limitador==1){
                  menor=numero;
                 }
      total_suma+=numero;
      limitador++;

}
/////////////////////////////////
int main() {

printf("%s\n","Bienvenid@as" );
printf("%s\n\n","Este programa le permite ingresar 10 numeros, determinando cual es el mayor y menor de los numeros digitados, y la suma de los mismos.");
//Bucle DO-WHILE
do {
  principal_bloque();
} while(limitador <= 10);

///////////////////////////////////////////////////////////////////
printf("\n%-30s %.2f\n","El numero digitado mayor es: ", mayor);
printf("%-30s %.2f\n","El numero digitado menor es: ", menor);
printf("%-30s %.2f\n","La suma total es:",total_suma );
///////////////////////////REINCIO-BLOQUE////////////////////////////
printf("\n%s","Desea introducir 10 numero mas (S/N)?: ");
        fflush(stdin);
        scanf("%c",&reinicio );
        while (reinicio=='s' || reinicio=='S') {
          system("cls");
          limitador=1;
          do {
            principal_bloque();
          } while(limitador <= 10);
          printf("\n%-30s %.2f\n","El numero digitado mayor es: ", mayor);
          printf("%-30s %.2f\n","El numero digitado menor es: ", menor);
          printf("%-30s %.2f\n","La suma total es:",total_suma );
        }
        while (reinicio=='n' || reinicio=='N') {
          printf("%s\n","Gracias por utilizar el programa!!!!!!!" );
          return 0;
        }
        while (reinicio!='n'|| reinicio!='N'|| reinicio!='s'||reinicio!='S') {
          printf("%s\n","Error comando no reconocido" );
          printf("\n%s\n","Desea introducir 10 numero mas (S/N)?: ");
                  fflush(stdin);
                  scanf("%c",&reinicio );
                  while (reinicio=='s' || reinicio=='S') {
                    system("cls");
                    limitador=1;
                    do {
                      principal_bloque();
                    } while(limitador <= 10);
                    printf("\n%-30s %.2f\n","El numero digitado mayor es: ", mayor);
                    printf("%-30s %.2f\n","El numero digitado menor es: ", menor);
                    printf("%-30s %.2f\n","La suma total es:",total_suma );
                  }
                  while (reinicio=='n' || reinicio=='N') {
                    printf("%s\n","Gracias por utilizar el programa!!!!!!!" );
                  }
        }
  return 0;
      }
