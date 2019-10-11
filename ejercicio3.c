/* EJERCICIO3: Crear un programa que simule una calculadora, donde el usuario digita la operación de la siguiente manera:
Ejemplo: Introduzca Operación: 5 * 3
El resultado es: 15.00
Ejemplo: Introduzca Operación: 10 / 3
El resultado es: 3.33333 */                    //Desarrollado por ------------------------> Anthony Sakamoto 2016-1565 <------------------------
/***POR MOTIVO DE MAYOR COMPRESION DEL CODIGO, SE HAN COMENTADO DURANTE EL DESARROLLO, LOS RESPECTIVOS BLOQUES DE CODIGO DEL PROGRAMA, SIENTASE LIBRE DE
EXPLORAR EL SIGUIENTE CODIGO***/

#include <stdio.h>
#include <math.h> //libreria para funcion pow() ---> elevar un numero.

     float n1, n2, resultado; //Variables para almancear dos numeros digitados por el usuario y el resultado de la operacion.
     char operador; //variable para almancenar el operador matematico.

int main() {

   printf("%s\n\n","BIENVENID@S" );
   printf("%s\n","- Calculador básica." );
   printf("%s\n","Nota: operaciones matemáticas disponibles: suma, resta, multiplicación, división y potencia" );//letrero de aviso para mostrar posibles operaciones.
   printf("\n%s\n","Porfavor digite la operación deseada: " ); //solicitud de operacion al usuario.
   scanf("%f%c%f", &n1,&operador,&n2 ); // escaneo de entrada de la operacion y asignacion a cada variables correspondiente.

// Sentencia switch-break para cada caso presentado de a la variable operador.
switch (operador) {
     case '+': resultado= n1+n2; printf("%s %.2f\n","El resultado es: ",resultado);break; // suma dos numeros y lo muestra en pantalla
     case '-': resultado= n1-n2; printf("%s %.2f\n","El resultado es: ",resultado);break; // resta dos numeros y lo muestra en pantalla
     case '*': resultado= n1*n2; printf("%s %.2f\n","El resultado es: ",resultado);break; // multiplica dos numeros y lo muestra en pantalla
     case '/': resultado= n1/n2; printf("%s %.2f\n","El resultado es: ",resultado);break; // divide dos numeros y lo muestra en pantalla
     case '^': resultado= pow(n1,n2); printf("%s %.2f\n","El resultado es: ",resultado);break; // eleva un numero a el exponente(n1^n2) y lo muestra en pantalla
     default: printf("%s\n","ERROR: No se puede realizar la operación." ); //muestra en pantalla mensaje de error a no ser una operacion de las anteriores.
   } // Fin sentencia switch-break.

  return 0;
}
