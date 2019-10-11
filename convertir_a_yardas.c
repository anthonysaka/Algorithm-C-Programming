/*HAGA UN PROGRAMA AL CUAL SE LE DIGITE UNA LONGITUD EXPRESADA EN PULGADAS E IMPRIMA LA MISMA LONGITUD EN YARDAS, PIES Y PULGADAS.
POR EJEMPLO , UNA LONGITUD DE 65 PULGADAS SERIA EXPRESADA COMO 1 YARDA, 2 PIES Y 5 PULGADAS*/

#include <stdio.h>

#define EQUI_PULGADAS_YARDAS 0.027778
#define EQUI_YARDAS_PIE 3
#define EQUI_PIE_PULGADAS 12

int pulgadas=0,distancia_pies,yarda_entera;
float distancia_yardas;

int main() {

printf("%s\t","Digite la cantidad de pulgadas: " );
scanf("%d",&pulgadas );

printf("%s","La distancia es igual a: " );

distancia_yardas= pulgadas*EQUI_PULGADAS_YARDAS;
yarda_entera= distancia_yardas/1;
printf("%d %s", yarda_entera, "yardas" );

distancia_pies= (distancia_yardas-yarda_entera) * EQUI_YARDAS_PIE;
printf(" %d %s\n",distancia_pies, "pies");



return 0;
}
