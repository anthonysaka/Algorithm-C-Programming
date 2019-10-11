/* Escriba un programa al cual se le digiten diez valores y al final imprima por pantalla la suma de los valores, la suma de los cuadrados, el promedio,
el máximo y el mínimo.*/
#include <stdio.h>
#include <math.h>

int limitador=1;
long total_suma_cuadrados=0;
float num,max,min,total_suma=0,promedio=0;

int main() {

while (limitador<=10) {

  printf("%s\n","Digite un numero:");
            scanf( "%f", &num );
             while (num<0) {
               printf("%s\n","No puede ser negativo" );
               return 0;
             }
             if ( num >= max ){
                max = num;
              }
             if (num < min || limitador==1){
               min=num;
              }
   total_suma+=num;
   total_suma_cuadrados+=pow(num,2);
   promedio=total_suma/limitador;
   limitador++;
}
printf("\n%-30s %.1f\n","El numero maximo es: ", max);
printf("%-30s %.1f\n","El numero minimo: ", min);
printf("%-30s %.1f\n","La suma total es:", total_suma);
printf("%-30s %ld\n","La suma de los cuadrado es:", total_suma_cuadrados);
printf("%-30s %.1f %c\n","El promedio es:", promedio,37);
  return 0;
}
