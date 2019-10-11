#include <stdio.h>
#include <string.h>

int main()
{

/*
char ordenar[8]="CRBEabw";
int x,y;
char temp;

for (x=0;x<8;x++) {
  for (y=0;y<8;y++) {

    if (ordenar[x]>ordenar[y]) {
      temp=ordenar[x];
      ordenar[x]=ordenar[y];
      ordenar[y]=temp;
    }
  }

}
  printf("%s %s\n","Ordenado: ",ordenar );
  */
  ////////////////////
/*
char s1[6] = "Abeja";
char s2[6] = "abeja";

int i;
printf( "s1=%s\t", s1 );
printf( "s2=%s\n", s2 );
i = strcmp( s1, s2 );
printf( "s1 es " );
if( i < 0 ) printf( "menor que" );
else if( i > 0 ) printf( "mayor que" );
else printf( "igual a" );
printf( " s2\n" );
*/
////////////////


int errnum;
for( errnum=0; errnum<39; errnum++ )
printf( "strerror(%d) = %s\n", errnum, strerror( errnum ) );


return 0;
}
