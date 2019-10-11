//EJERCICIO 1: Escribir un programa que lea la hora de un día de notación de 24 horas y la respuesta en notación de 12 horas.
//Desarrollado por ------------------------> Anthony Sakamoto 2016-1565 <------------------------
/***POR MOTIVO DE MAYOR COMPRESION DEL CODIGO, SE HAN COMENTADO DURANTE EL DESARROLLO, LOS RESPECTIVOS BLOQUES DE CODIGO DEL PROGRAMA, SIENTASE LIBRE DE
EXPLORAR EL SIGUIENTE CODIGO***/
#include <stdio.h>

     int horas_not_24,minutos,horas_not_12,hora_cero; //Variables para almacenar las horas y minutos.
     char simbologia; //Variable para almacenar el caracter ':'
int main() {
  printf("BINEVENID@S\n\n");
  printf("%s","Digite la hora en notación de 24 horas, (HH:MM): " );
  scanf("%d%c%d",&horas_not_24,&simbologia,&minutos);

  if (simbologia!=':'){ //Sentencia if para que solo se puede utilizar ':', HH:MM.;
    printf("%s\n","ERROR, debe utilizar dos puntos, HH:MM" );
    return 0;} // fin sentencia if
  if (horas_not_24>=24 | minutos>59) { //Sentencia if para controlar que las horas y minutos digitas sean veridicas.
    printf("%s\n","ERROR, cantidad de horas o minutos invalida" );
    return 0; } //Fin sentencia if.

   //Sentencia if --> consta de 4 condiciones para convertir la hora de notacion 24 a 12.
  if (horas_not_24<12 && horas_not_24>0){
      printf("\n%s %.2d:%.2d A.M.\n","La hora es : ",horas_not_24,minutos);
   }
  else if (horas_not_24==12){
      printf("\n%s %.2d:%.2d P.M.\n","La hora es : ",horas_not_24,minutos);
   }
  else if (horas_not_24==0){
      hora_cero=horas_not_24 + 12;
      printf("\n%s %.2d:%.2d A.M.\n","La hora es : ",hora_cero,minutos);
  }
  else if (horas_not_24>=13 && horas_not_24<=23){
      horas_not_12 = horas_not_24-12;
      printf("\n%s %.2d:%.2d P.M.\n","La hora es : ",horas_not_12,minutos);
  } //Fin sentencia if.
return 0;
}
