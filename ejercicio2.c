/* EJERCICIO2: Escribir un programa que determine si un año es bisiesto. Un año es bisiesto si es múltiplo de 4 (por ejemplo, 1984). Sin embargo, los años
 múltiplos de 100 sólo son bisiestos cuando a la vez son múltiples de 400 (por ejemplo, 1800 no es bisiesto, mientras que 2000 sí lo será).*/

/*Para la elaboracion del programa, primero se analizó cuando un año es bisiesto, estableciendo ciertas condiciones, que implica la implementación de un algoritmo
adecuado para el correcto funcionamiento de este. Primero se incluyen las librerias necesarias, en este caso solo la <stdio.h>. Luego se declara una unica
variable ano oara almacenar el año digitado por el usuario. Luego se procede a definir la funcion main() y a codificar su bloque de codigo. Se muestran
ciertos letreros con la funcion printf, dandole las instrucciones al usuario, luego con la funcion scanf se scanea el año digitado por el usuario y se le asigna
a la variable ano declarada. Llegando a la parte principal del programa, se codifica una sentencia if-else para establecer las condiciones que determinaran si un año
es bisiesto o no. Por ultimo, de acuerdo a la condicion que resulte correcta en cada caso presentado se muestra a travez de printf si es bisiesto o no.*/
//Desarrollado por ------------------------> Anthony Sakamoto 2016-1565 <------------------------
/***POR MOTIVO DE MAYOR COMPRESION DEL CODIGO, SE HAN COMENTADO DURANTE EL DESARROLLO, LOS RESPECTIVOS BLOQUES DE CODIGO DEL PROGRAMA, SIENTASE LIBRE DE
EXPLORAR EL SIGUIENTE CODIGO***/

#include <stdio.h>

   int ano; //Variable global para almacenar el año digitado por el usuario.

int main() {

     printf("%s\n\n","BIENVENID@S" );
     printf("%s\n","Este programa determina si el año bisiesto" );
     printf("%s\n","Digite el año deseado, por ejemplo 1984 : " );
     scanf("%d",&ano );// Escaneo de entrada del año por el usuario.

//Sentencia if-else para determinar año bisiesto
     if (ano % 4 == 0 && ano % 100 != 0 && ano % 400 !=0) { //primera condición para determinar si el año es bisiesto: si es multiplo de 4 pero no de 100 ni de 400.
       printf("%s %d %s\n","El año",ano,"es bisiesto." ); // y se muestra en pantalla.
     }
     else if (ano%100==0 && ano%400==0){   //segunda condicion para determinar si esl ano es bisiesto: si es multiplo de 100 y 400, entonces se muestra en patalla.
       printf("%s %d %s\n","El año",ano,"es bisiesto." );
     }
     else{
      printf("%s %d %s\n","El año",ano,"no es bisiesto." ); //De no cumplir las anteriores condiciones entonces el año no es bisiesto y se muestra en pantalla.
     }
     //Fin Sentencia if
return 0;
   }
