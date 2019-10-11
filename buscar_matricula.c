/*2. Si se tiene un arreglo con la matrícula de 20 estudiantes, desarrolle una función que retorne el índice donde
se encuentra una matrícula pasada por parámetro. Para esto utilizar el siguiente prototipo:
	A. int buscarEstudiante ( long estudiantes[20], long matriculaBuscar )*/

  #include "stdio.h"

long buscarEstudiante(long estudiantes[20], long matriculaBuscar);

long estudiantes[2],matriculaBuscar,busquedaEstudiante;

int cont,indice,indiceMatricula=-1;
  int main() {

    for (cont=0;cont<2;cont++){
      printf("%2ld. %s Ingrese la matricula: ",cont+1);
      scanf("%ld",&estudiantes[cont] );
    }

    printf("%s","Ingrese la matricula que desea saber el indice: ");
    scanf("%ld",&matriculaBuscar );

 busquedaEstudiante= buscarEstudiante(estudiantes,matriculaBuscar);

if(busquedaEstudiante==-1) {
   printf("%s\n","MATRICULA NO EXISTE!!!" );
 }
if(busquedaEstudiante>=0) {
  printf("\n %s %ld\n","El indice de la matricula en el arreglo es: ", busquedaEstudiante);
}
    return 0;
  }

////////////////////FUNCION PARA BUSCAR ESTUDIANTE//////////////////////////
long buscarEstudiante(long estudiantes[2], long matriculaBuscar){

      for (indice=0;indice<2;indice++){
        if (estudiantes[indice]==matriculaBuscar) {
          return indice;
        }
}
return indiceMatricula;
}
