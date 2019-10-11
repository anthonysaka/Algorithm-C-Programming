#include <stdio.h>
#include <stdlib.h>

int main()
{
    long estudiantes[4], matriculaBuscar;
    int notas[4], indice, indiceMatBuscar=-1;
    for(indice = 0; indice <=3; indice++ )
    {
        printf("Introduzca Matricula Estudiante No. %d ", indice + 1 );
        scanf("%d", &estudiantes[indice]);

        printf("Introduzca Nota Estudiante No. %d ", indice + 1 );
        scanf("%d", &notas[indice]);

    }

    printf("Digite Matricula Consultar: ");
    scanf("%d", &matriculaBuscar);

    // recorrer el arreglo de estudiante para determinar
    // la posicion en la que se encuentra la matricula digitada
    for(indice = 0; indice <= 3; indice++)
    {
        if ( estudiantes[indice] == matriculaBuscar)
        {
            indiceMatBuscar = indice;
            break;
        }
    }

    if ( indiceMatBuscar >= 0 )
    {
        printf("La nota obtenida es: %d ", notas[indiceMatBuscar]);

    }else
    {
        printf("La matricula especificada no existe!!");
    }
    return 0;
}
