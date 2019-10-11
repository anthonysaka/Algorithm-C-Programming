/*ESCRIBA UN PROGRAMA AL CUAL SE LE DIGITE DOS NUMEROS REPRESENTANDO UNA LONGITUD EN PIES Y PULGADAS E IMPRIMA DICHA DISTANCIA EXPRESADA EN MENTROS*/

#include <stdio.h>

#define EQUI_METROS_PIES 0.3048
#define EQUI_METROS_PULGADAS 0.0254

int pies=0, pulgadas=0;
float distancia;

int main() {

printf("%s\t","Digite la cantidad de pies: " );
scanf("%d",&pies );
printf("%s","Digite la cantidad de pulgadas: " );
scanf("%d",&pulgadas );

distancia=(EQUI_METROS_PIES*pies)+(EQUI_METROS_PULGADAS*pulgadas);

printf("\n%s %.4f\n","La distancia equivalente en metros es: ", distancia );

  return 0;
}
