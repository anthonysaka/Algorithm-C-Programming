/*EJERCICIO4: Desarrolle un programa que muestre la cantidad de minutos que hay en una hora digitada en formato HH:MM:SS
Ejemplo: Introduzca la hora en formato (HH:MM:SS): 08:25:30, Las 08:25:30 tiene un total de 505.50 Minutos*/
//Desarrollado por ------------------------> Anthony Sakamoto 2016-1565 <------------------------
/***POR MOTIVO DE MAYOR COMPRESION DEL CODIGO, SE HAN COMENTADO DURANTE EL DESARROLLO, LOS RESPECTIVOS BLOQUES DE CODIGO DEL PROGRAMA, SIENTASE LIBRE DE
EXPLORAR EL SIGUIENTE CODIGO***/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

     int horas_12,minutos,horas_24,hora_cero,segundos,
         opcion, tanda;
     float total_minutos;
     char simbologia1;
     char tanda_letra[4];

int main() {
  printf("BINEVENID@S\n\n");
  seleccion_opciones:
  printf("%s\n\n","- Seleccione un tipo de notación de horas:" );
  printf("%-15s\n","1. 12 horas" );
  printf("%-15s\n", "2. 24 horas" );
  scanf("%d",&opcion);
  system("cls"); //borra la pantalla hasta aqui.

 switch (opcion) {  /*Sentencia switch para cada opcion*/
    case 1:
           printf("%s\n","Digite la hora en formato (HH:MM:SS) : " );
           scanf("%d%c%d%c%d",&horas_12,&simbologia1,&minutos,&simbologia1,&segundos);

           if (simbologia1!=':'){ //Sentencia if para que solo se puede utilizar ':', HH:MM:SS
              printf("%s\n","ERROR: debe utilizar dos puntos, HH:MM:SS" );
              return 0;  //Fin sentencia
              }
           if (horas_12>12 | horas_12<0 | minutos>59 | segundos>59) { //sentencia if para restringir cantidad de horas, minutos y segundos
                printf("%s\n","ERROR: cantidad de horas, minutos o segundos invalida" );
              return 0;  //Fin sentencia
            }

           printf("%s\n","Seleccione si es A.M. o P.M. : " );
           printf("%-15s\n","1. A.M." );
           printf("%-15s\n","2. P.M." );
           scanf("%d",&tanda);

           if (tanda==1) {
             strcpy(tanda_letra, "A.M.");
           }
           else if (tanda==2){
             strcpy(tanda_letra, "P.M.");
           }

           total_minutos = (horas_12*60) + minutos + ((float)segundos/60);
           printf("\n%s %.2d:%.2d:%.2d %s %s %.2f %s\n","La hora", horas_12,minutos,segundos,tanda_letra,"tiene un total de",total_minutos, "minutos");
           break;
      // -----------------  FIN CASE 1  -----------------
    case 2:
          printf("%s\n","Digite la hora en formato (HH:MM:SS) : " );
          scanf("%d%c%d%c%d",&horas_24,&simbologia1,&minutos,&simbologia1,&segundos);

          if (simbologia1!=':'){ //Sentencia if para que solo se puede utilizar ':', HH:MM:SS
             printf("%s\n","ERROR: debe utilizar dos puntos, HH:MM:SS" );
             return 0;  //Fin sentencia
             }
          if (horas_24>=24 | horas_24<0 | minutos>59 | segundos>59) { //Bucle if para restringir cantidad de horas, minutos y segundos
               printf("%s\n","ERROR: cantidad de horas, minutos o segundos inválida" );
             return 0;  //Fin sentencia
             }

   /*Sentencia if para determinar cantidad de minutos. En este bloque de codigo se convierte de 24 --> 12 y se hacen los respectivos calculos para determinar
   la cantidad de minutos pero no se muestran en pantalla en notacion de 12 si no en notacion de 24*/
          if (horas_24<12 && horas_24>0){
             total_minutos=(horas_24*60) + minutos + ((float)segundos/60);
             printf("\n%s %.2d:%.2d:%.2d %s %s %.2f %s\n","La hora", horas_24,minutos,segundos,"A.M.","tiene un total de",total_minutos, "minutos");
            }
          else if (horas_24==12){
             total_minutos=(horas_24*60) + minutos + ((float)segundos/60);
             printf("\n%s %.2d:%.2d:%.2d %s %s %.2f %s","La hora", horas_24,minutos,segundos,"P.M.", "tiene un total de",total_minutos, "minutos");
            }
          else if (horas_24==0){
             hora_cero=horas_24 + 12;
             total_minutos=(hora_cero*60) + minutos + ((float)segundos/60);
             printf("\n%s %.2d:%.2d:%.2d %s %s %.2f %s","La hora", horas_24,minutos,segundos,"A.M.", "tiene un total de",total_minutos, "minutos");
            }
          else if (horas_24>=13 && horas_24<=23){
             horas_12 = horas_24-12;
             total_minutos=(horas_12*60) + minutos + ((float)segundos/60);
             printf("\n%s %.2d:%.2d:%.2d %s %s %.2f %s","La hora", horas_24,minutos,segundos,"P.M.", "tiene un total de",total_minutos, "minutos");
           }/*Fin Sentencia if*/ break; //FIN Case 2.
      default: printf("%s\n\n","ERROR: opción no encontrada" );
               while (opcion!=1 | opcion!=2) {
               goto seleccion_opciones;
                }
    }
return 0;
}
