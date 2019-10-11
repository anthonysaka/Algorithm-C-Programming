
#include <stdio.h>

//VARIABLES AQUI
float monto_ahorrar;
int ano,mes, cantidad_meses,limitador=1;
char formato;

int funcion_digitacion_datos_usuario(){
 printf("%-30s","- Monto Ahorrar: " );
 scanf("%f",&monto_ahorrar );

   while (monto_ahorrar<=0) {
    printf("%-20s\n","Dato Invalido" );
    printf("%-30s","Ingrese de nuevo: " );
    scanf("%f",&monto_ahorrar );
    }
 printf("%-30s","- Periodo Inicial (MM:YYYY): " );
 scanf("%d%c%d",&mes,&formato,&ano );
 while (mes>12 || formato !='-' || mes<0 || ano<0 ) {
      printf("%-20s\n","Dato Invalido" );
      printf("%-30s","Ingrese de nuevo: " );
      scanf("%d%c%d",&mes,&formato,&ano );
    }
 printf("%-30s","- Cantidad Meses Ahorrar: " );
 scanf("%d",&cantidad_meses );
  while (cantidad_meses<0) {
      printf("%-20s\n","Dato Invalido" );
      printf("%-30s","Ingrese de nuevo: " );
      scanf("%d%c%d",&cantidad_meses );
    }
  }


int main() {

 printf("%s\n","BALANCE DE UNA CUENTA CON INCREMENTO DE 2 PORCIENTO POR MES" );
 printf("%s\n\n","///////////////////////////////////////////////////////////" );

 funcion_digitacion_datos_usuario();

//////////////////BLOQUE PARA MOSTRAR AL USUARIO///////////////////////
    while (limitador<=cantidad_meses) {
      printf("%.4d%c%.2d   %.2f\n",ano,formato,mes,monto_ahorrar);
         monto_ahorrar=monto_ahorrar*1.02;
         if (mes==12) {
           ano++;
           mes=1;
         }
         else
         {
           mes++;
         }
         limitador++;
    }
  return 0;
}
