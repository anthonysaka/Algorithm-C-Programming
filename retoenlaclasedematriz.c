/*#include "stdio.h"


int cuadro[3][3]={
                  {0,0,0},
                  {0,0,0},
                  {0,0,0},
};
int indiceFila,indiceColumna;

int main() {

  for (indiceColumna=0;indiceColumna<=2;indiceColumna++) {
    for (indiceFila=0; indiceFila<=2;indiceFila++){

      if (indiceFila==indiceColumna) {
        cuadro[indiceFila][indiceColumna]=1;
      //  printf("%d\n",cuadro[indiceFila][indiceColumna]);
      }
      else{
        cuadro[indiceFila][indiceColumna]=0;
      //  printf("%d\n",cuadro[indiceFila][indiceColumna]);
      }
    }
    printf("\n");
}
return 0;

}
////////////ARREGLAR///////////// */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidadCeldas, fila, columna;
    printf("Introduzca Cantidad Celdas: ");
    scanf("%d", &cantidadCeldas);

    int matriz[cantidadCeldas][cantidadCeldas];
    for(fila = 0; fila <= cantidadCeldas; fila++)
    {
        for(columna = 0; columna <= cantidadCeldas ; columna++ )
        {
            if ( fila == columna)
            {
                matriz[fila][columna] = 1;
            }
            else
            {
               matriz[fila][columna] = 0;
            }
        }
    }
    printf("\n");
    for(fila = 0; fila <= cantidadCeldas; fila++)
    {
        for(columna = 0; columna <= cantidadCeldas ; columna++ )
        {
            printf( "%4d", matriz[fila][columna] );

        }

        printf("\n\n");
    }
}
