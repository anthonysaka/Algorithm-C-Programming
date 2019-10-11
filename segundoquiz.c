#include "stdio.h"


int main()

{

    int valoresUno[3] ={0,0,0}, valoresDos[3] = {0,0,0}, indice, valor;

    for ( indice = 0; indice < 3; indice++)

    {

        scanf("%d", &valor);

        if ( indice % 2 == 0 )

        {

            valoresUno[indice] = valor;
//printf("%d\n", valoresUno[indice]);
        }

        else

        {

            valoresDos[indice] = valor;
printf("%d\n", valoresDos[indice]);
        }

    }

    return 0;

}
