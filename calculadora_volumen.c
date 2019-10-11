//PROGRAMA QUE CALCULA EL VOLUMEN

#include <stdio.h>
#include <math.h>


float LARGO,ANCHO,ALTURA;
int UNIDAD;  //Definiendo variables globales

int main() {
printf("%c\n",161 );
  printf("BIENVENIDO A EL PROGRAMA DONDE PODRA CALCULAR EL VOLUMEN DE UNA CAJA\n\n");
  printf("Digite el numero de la unidad de medida correspondiente:\n");
  printf("1.centimentros\n");
	printf("2.pulgadas\n");
	printf("3.milimetros\n");
  scanf("%d",&UNIDAD);

printf("\n");

  printf("%-45s","Digite el largo de la caja:");//Peticion y lectura del largo de la caja
  scanf("%f",&LARGO);

  printf("%-45s","Digite el ancho de la caja:");//Peticion y lectura del lancho de la caja
  scanf("%f",&ANCHO);

  printf("%-45s","Digite la altura de la caja:");//Peticion y lectura del la altura de la caja
  scanf("%f",&ALTURA);


printf("\n\n");

// BUCLE IF PARA MOSTRAR RESULTADO.
if (UNIDAD==1)
printf("El volumen = %.2f  cm^3",(LARGO*ANCHO*ALTURA));//Muestra el resultado centimetros
if (UNIDAD==2)
printf("El volumen = %.2f  pulg^3",(LARGO*ANCHO*ALTURA));//Muestra el resultado pulgadas
if (UNIDAD==3)
printf("El volumen = %.2f  mm^3",(LARGO*ANCHO*ALTURA));//Muestra el resultado milimetros

  return 0;
}

/* int negativos1(){
  printf("ERROR: no se puede digitar numeros negativos\n");
  scanf("%f",&LARGO);
}
int negativos2(){
  printf("ERROR: no se puede digitar numeros negativos\n");
  scanf("%f",&ANCHO);
}
int negativos3(){
  printf("ERROR: no se puede digitar numeros negativos\n");
  scanf("%f",&ALTURA);
}*/
