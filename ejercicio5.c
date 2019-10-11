/*Desarrollar un programa que reste 2 horas digitadas por el usuario en el formato 24 horas y que sea digitado de la siguiente manera: HH:MM:SS. También el resultado debe ser mostrado utilizando el mismo formato.
Ejemplo:
Digite Hora Inicial (HH:MM:SS): 10:50:40
Digite Hora Final (HH:MM:SS): 12:55:50
Resultado:
12:55:50
- 10:50:40                           Desarrollado por ------------------------> Anthony Sakamoto 2016-1565 <------------------------
---------------
02:05:10
Nota: La salida que debe mostrar el programa debe ser tal cual este ejemplo.*/
#include <stdio.h>

     int hora1, minuto1, segundo1, hora2, minuto2, segundo2,
         total_hora,total_minuto,total_segundo;
     char simbolo;

int main() {
  printf("%s\n","BIENVENID@S" );
  printf("%s\n","En este programa podra restar dos horas en notación de 24 horas,\ncalculando la cantidad de horas transcurridas" );
  printf("\n%s", "- Digite la hora incial (HH:MM:SS): ");
  scanf("%d%c%d%c%d",&hora1,&simbolo,&minuto1,&simbolo,&segundo1 );
  //Bloque para restringir entrada de datos
    if (simbolo!=':'){ //Sentencia if para que solo se puede utilizar ':', HH:MM:SS
       printf("%s\n","ERROR: debe utilizar dos puntos, HH:MM:SS" );
       return 0;  //Fin sentencia
       }
    if (hora1>=24 | hora1<0 | minuto1>59 | segundo1>59) { //Sentencia if para restringir cantidad de horas, minutos y segundos
         printf("%s\n","ERROR: cantidad de horas, minutos o segundos inválida" );
       return 0;  //Fin sentencia
       }
  printf("\n%s","- Digite la hora final (HH:MM:SS): " );
  scanf("%d%c%d%c%d",&hora2,&simbolo,&minuto2,&simbolo,&segundo2 );
printf("\n");//para dar espacio antes de resultado
//Bloque para restringir entrada de datos
  if (simbolo!=':'){ //Sentencia if para que solo se puede utilizar ':', HH:MM:SS
     printf("%s\n","ERROR: debe utilizar dos puntos, HH:MM:SS" );
     return 0;  //Fin sentencia
     }
    if (hora2>=24 | hora2<0 | minuto2>59 | segundo2>59){
       printf("%s\n","ERROR: cantidad de horas, minutos o segundos inválida" );
       return 0;
     }
// FIN BLOQUE
//BLOQUE para posibles entradas de datos con hora2>hora1
if (hora1<hora2 && minuto1<minuto2 && segundo1<segundo2) {
  total_hora = hora2-hora1;
  total_minuto = minuto2-minuto1;
  total_segundo = segundo2-segundo1;
  if (total_hora<0) {

    total_hora = ((hora2+24)-hora1)-1;
  }
  //BLOQUE MOSTRAR Resultado
  printf("%s\n\n","RESULTADO:" );
  printf("%4.2d%c%.2d%c%.2d\n",hora2,simbolo,minuto2,simbolo,segundo2 );
  printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
  printf("%s\n","---------------" );
  printf("%.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");

}
else if (hora1<hora2 && minuto1>minuto2 && segundo1<segundo2) {
  total_hora = (hora2-hora1)-1;
  total_minuto = (minuto2+60)-minuto1;
  total_segundo = segundo2-segundo1;
  printf("%s\n\n","RESULTADO:" );
  printf("%4.2d%c%.2d%c%.2d\n",hora2,simbolo,minuto2,simbolo,segundo2 );
  printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
  printf("%s\n","---------------" );
  printf("%4.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
else if (hora1<hora2 && minuto1<minuto2 && segundo1>segundo2) {
  total_hora = hora2-hora1;
  total_minuto = (minuto2-minuto1)-1;
  total_segundo = (segundo2+60)-segundo1;
  //BLOQUE MOSTRAR Resultado
  printf("%s\n\n","RESULTADO:" );
  printf("%4.2d%c%.2d%c%.2d\n",hora2,simbolo,minuto2,simbolo,segundo2 );
  printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
  printf("%s\n","---------------" );
  printf("%.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
else if (hora1<hora2 && minuto1>minuto2 && segundo1>segundo2) {
  total_hora = (hora2-hora1)-1;
  total_minuto = ((minuto2+60)-minuto1)-1;
  total_segundo = (segundo2+60)-segundo1;
  //BLOQUE MOSTRAR Resultado
  printf("%s\n\n","RESULTADO:" );
  printf("%4.2d%c%.2d%c%.2d\n",hora2,simbolo,minuto2,simbolo,segundo2 );
  printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
  printf("%s\n","---------------" );
  printf("%.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
//-------------BLOQUE PARA POSIBLES ENTRADAS CUANDO hora1>hora2
else if (hora1>hora2 && minuto1<minuto2 && segundo1<segundo2) {
  total_hora = (hora2+24)-hora1;
  total_minuto = minuto2-minuto1;
  total_segundo = segundo2-segundo1;
  //BLOQUE MOSTRAR Resultado
  printf("%s\n\n","RESULTADO:" );
  printf("%4.2d%c%.2d%c%.2d %s\n",hora2,simbolo,minuto2,simbolo,segundo2,"(Dia siguiente)" );
  printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
  printf("%s\n","---------------" );
  printf("%4.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
else if (hora1>hora2 && minuto1>minuto2 && segundo1<segundo2) {
  total_hora = ((hora2+24)-hora1)-1;
  total_minuto = (minuto2+60-minuto1);
  total_segundo = segundo2-segundo1;
  //BLOQUE MOSTRAR Resultado
  printf("%s\n\n","RESULTADO:" );
  printf("%4.2d%c%.2d%c%.2d %s\n",hora2,simbolo,minuto2,simbolo,segundo2,"(Dia siguiente)" );
  printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
  printf("%s\n","---------------" );
  printf("%4.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
else if (hora1>hora2 && minuto1<minuto2 && segundo1>segundo2) {
  total_hora = (hora2+24)-hora1;
  total_minuto = (minuto2-minuto1)-1;
  total_segundo = (segundo2+60)-segundo1;
  //BLOQUE MOSTRAR Resultado
  printf("%s\n\n","RESULTADO:" );
  printf("%4.2d%c%.2d%c%.2d %s\n",hora2,simbolo,minuto2,simbolo,segundo2,"(Dia siguiente)" );
  printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
  printf("%s\n","---------------" );
  printf("%4.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
else if (hora1>hora2 && minuto1>minuto2 && segundo1>segundo2) {
  total_hora = ((hora2+24)-hora1)-1;
  total_minuto = ((minuto2+60)-minuto1)-1;
  total_segundo = (segundo2+60)-segundo1;
  //BLOQUE MOSTRAR Resultado
  printf("%s\n\n","RESULTADO:" );
  printf("%4.2d%c%.2d%c%.2d %s\n",hora2,simbolo,minuto2,simbolo,segundo2,"(Dia siguiente)" );
  printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
  printf("%s\n","---------------" );
  printf("%4.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
//------------PARA CUANDO SEAN IGUALES----------------
else if (hora1==hora2 && minuto1==minuto2 && segundo1==segundo2){
total_hora = hora2-hora1;
total_minuto = minuto2-minuto1;
total_segundo = segundo2-segundo1;
//BLOQUE MOSTRAR Resultado
printf("%s\n\n","RESULTADO:" );
printf("%4.2d%c%.2d%c%.2d\n",hora2,simbolo,minuto2,simbolo,segundo2 );
printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
printf("%s\n","---------------" );
printf("%.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
else if (hora1==hora2 && minuto1==minuto2 && segundo1>segundo2){
printf("\n%s\n\n","ERROR: datos sin concoordancia" );
}
else if (hora1==hora2 && minuto1==minuto2 && segundo1<segundo2){
total_hora = hora2-hora1;
total_minuto = minuto2-minuto1;
total_segundo = segundo2-segundo1;
//BLOQUE MOSTRAR Resultado
printf("%s\n\n","RESULTADO:" );
printf("%4.2d%c%.2d%c%.2d\n",hora2,simbolo,minuto2,simbolo,segundo2 );
printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
printf("%s\n","---------------" );
printf("%.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
//---
else if (hora1>hora2 &&  minuto1==minuto2 && segundo1==segundo2){
printf("\n%s\n\n","ERROR: datos sin concoordancia" );
}
else if (hora1<hora2 &&  minuto1==minuto2 && segundo1==segundo2){
total_hora = hora2-hora1;
total_minuto = minuto2-minuto1;
total_segundo = segundo2-segundo1;
//BLOQUE MOSTRAR Resultado
printf("%s\n\n","RESULTADO:" );
printf("%4.2d%c%.2d%c%.2d\n",hora2,simbolo,minuto2,simbolo,segundo2 );
printf("%s %.2d%c%.2d%c%.2d\n","-",hora1,simbolo,minuto1,simbolo,segundo1 );
printf("%s\n","---------------" );
printf("%.2d%c%.2d%c%.2d %s\n",total_hora,simbolo,total_minuto,simbolo,total_segundo,"Tiempo transcurrido");
}
  return 0;
}
