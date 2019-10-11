#include <stdio.h>

int dia,mes,ano;
char simbolo;
                          //arreglar simbolooo no leerlo en el scanf
int main() {

  printf("\n%s", "- Digite la fecha (dd/mm/yyyy): ");
  scanf("%d%c%d%c%d",&dia,&simbolo,&mes,&simbolo,&ano);

  //Bloque para restringir entrada de datos
    while (simbolo!='/'){
       printf("%s\n\n","ERROR: debe utilizar --> / <--, (dd/mm/yyyy) " );
       printf("\n%s", "- Digite la fecha (dd/mm/yyyy): ");
       scanf("%d%c%d%c%d",&dia,&simbolo,&mes,&simbolo,&ano);
       }
    while (dia<0 || mes<0 || ano<0){
          printf("%s\n\n","ERROR: no se puede utilizar valores negativos." );
          printf("\n%s", "- Digite la fecha (dd/mm/yyyy): ");
          scanf("%d%c%d%c%d",&dia,&simbolo,&mes,&simbolo,&ano);
          }

    while (dia>31 || mes>12 ) {
         printf("%s\n\n","ERROR: datos incoherentes, no existe un mes mayor a 12 o un dia mayor a 31" );
         printf("\n%s", "- Digite la fecha (dd/mm/yyyy): ");
       scanf("%d%c%d%c%d",&dia,&simbolo,&mes,&simbolo,&ano);
     }
do {
  printf("%s\n\n","ERROR:febrero no tiene mas de 28 dias" );
  printf("\n%s", "- Digite la fecha (dd/mm/yyyy): ");
  scanf("%d%c%d%c%d",&dia,&simbolo,&mes,&simbolo,&ano);
} while(mes=2 && dia>28);

printf("%s%c%d%c%d","La fecha es:", dia,simbolo,mes,simbolo,ano );
  return 0;
}
